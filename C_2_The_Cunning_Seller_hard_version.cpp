#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll cost(int x) {
    if (x == 0) return 3;
    return pow(3, x+1) + x * pow(3, x-1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (k >= n) {
            cout << 3 * n << endl;
            continue;
        }
        vector<int> digits;
        ll temp = n;
        while (temp) {
            digits.push_back(temp % 3);
            temp /= 3;
        }
        int deals_needed = 0;
        for (int d : digits) deals_needed += d;
        if (deals_needed <= k) {
            ll total_cost = 0;
            for (int i = 0; i < digits.size(); i++) {
                total_cost += digits[i] * cost(i);
            }
            cout <<"hello"<< total_cost << endl;
        } else {
            
            for (int i = 0; i < digits.size() - 1; i++) {
                while (digits[i] >= 3) {
                    digits[i] -= 3;
                    digits[i+1] += 1;
                    deals_needed -= 2;
                    if (deals_needed <= k) break;
                }
                if (deals_needed <= k) break;
            }
            if (deals_needed > k) {
                cout << -1 << endl;
            } else {
                ll total_cost = 0;
                for (int i = 0; i < digits.size(); i++) {
                    total_cost += digits[i] * cost(i);
                }
                cout << total_cost << endl;
            }
        }
    }
    return 0;
}