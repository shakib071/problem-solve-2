//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    
    // for(int i=1;i<k;i++){
    //     cout<<1<<" "<<i<<endl;
    // }
    // ll n=k-1;
    // cout<<(x*k-(k-1))<<" "<<((y*k)-(n*(n+1))/2)<<endl;

    for(int i=1;i<=k/2;i++){
        cout<<x-i<<" "<<y<<endl;
        cout<<x+i<<" "<<y<<endl;
    }

    if(k%2==1) cout<<x<<" "<<y<<endl;



}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;cin>>n;
     while(n--) solve();
     
    return 0;

}