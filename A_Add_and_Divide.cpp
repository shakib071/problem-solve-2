//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==0){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
    ll ans=1e9;

    for(int i=0;i<=30;i++){
        ll x=a;

        if(b+i>=2){
            ll turns=i;
            while(x){
                x=x/(b+i);
                turns++;
            }
            ans=min(turns,ans);
        }
    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int t;
     cin>>t;

     while(t--) solve();
     
    return 0;

}