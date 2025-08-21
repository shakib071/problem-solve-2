//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
 
ll power (int n , int k){
    ll ans =1;
    for(int i=1;i<=k;i++) ans *=n;
 
    return ans;
}
 
ll cost(int x) {
    if (x == 0) return 3;
    return power(3,x+1) + x*power(3,x-1);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
       ll n;
       cin>>n;
 
       vector<int>base3digits;
       ll temp = n;
 
       while(temp){
        base3digits.push_back(temp % 3);
        temp /= 3;
       }
 
       ll ans = 0;
 
       for(int i=0;i<base3digits.size();i++){
        ans = ans + (base3digits[i] * cost(i));
       }
 
       cout<<ans<<endl;
    }
    return 0;
}