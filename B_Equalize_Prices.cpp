#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int t;
   cin>>t;

   while(t--){
    ll n,k;
    cin>>n>>k;
    ll mx = -1,mn=1e11;

    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mx = max(mx,x);
        mn = min(mn,x);
    }

    // cout<<mx<<" " << mn<<endl;
    if(mx-k<=mn+k)cout<<mn+k<<endl;
    else cout<<-1<<endl;
   }  
     
    return 0;

}