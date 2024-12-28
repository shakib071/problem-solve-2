//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;

    ll gcdd=__gcd(a,__gcd(b,c));
    // cout<<gcdd<<endl;
    ll cutToEqual=((a/gcdd)-1)+((b/gcdd)-1)+((c/gcdd)-1);
    if(cutToEqual<=3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t=1;
   cin>>t;

   while(t--) solve();  
     
    return 0;

}