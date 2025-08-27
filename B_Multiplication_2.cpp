//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
const long long MAX = 1000000000000000000LL;
int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   ll inf = 1e18;  
   double div = 0;
   
   vector<ll>v;
   bool hasZero = false;
   forn(n){
    ll x;
    cin>>x;
    v.push_back(x);
    if(x==0){
        hasZero = true;
    }
   }
   if(hasZero){
    cout<<0<<endl;
    return 0;
   }
   ll ans = 1;
   for(int i=0;i<n;i++){
    if(ans > MAX/v[i]){
        cout<<-1<<endl;
        return 0;
    }
    ans *= v[i];
   }
   cout<<ans<<endl;
    return 0;

}