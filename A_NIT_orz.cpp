//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll n,z;
    cin>>n>>z;
    ll mx=0;
    while(n--){
        ll x; cin>>x;
        mx = max(mx,(x|z));
    }

    cout<<mx<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--) solve();;  
     
    return 0;

}