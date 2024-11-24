//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll fN=1,fr=1,fNr=1;

ll pw(ll n,ll m){
    ll mul=1;
    for(ll i=1;i<=n;i++){
        // if((mul*n) %m)  mul=(mul*n)%m;
        // lsee mul=mul*n;
        mul=mul*n;
    }
    return mul;
}

void funct(ll r,ll n,ll m){
    ll temp=1;
    for(ll i=2;i<=n;i++){
        temp=((temp)*(pow(i,i)));

        if(i==n) fN=temp;
        if(i==n-r) fNr=temp;
        if(i==r) fr=temp;
    }
}

void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    // cout<<pw(10,3)<<endl;
    while (q--)
    {
        ll r;
        cin>>r;
        funct(r,n,m);
        // cout<<fN<<fr<<fNr<<endl;
        ll ans = ((fN)/((fr)*(fNr)))%m;
        cout<<ans<<endl;

    }
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;

    while (t--)
    {
        solve();
    }
      
     
    return 0;

}