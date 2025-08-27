//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
 int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < n; i++) {
        int complement = x - a[i];
        if (numToIndex.find(complement) != numToIndex.end()) {
            cout << numToIndex[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        numToIndex[a[i]] = i;
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;

}