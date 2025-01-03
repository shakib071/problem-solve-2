//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;

    if(a<c) cout<<1<<" ";
    else cout<<-1<<" ";

    if(c<a*b) cout<<b<<endl;
    else cout<<-1<<endl;
}



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

    int t;cin>>t;
    while(t--) solve();
     
    return 0;

}