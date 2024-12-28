//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll x0,n;
    cin>>x0>>n;

    ll d=0;
    if(n%4==1) d=n;
    else if (n%4==2) d=-1;
    else if (n%4==3) d=-(n+1);

    if(x0 % 2 ==0) cout<<x0-d<<endl;
    else cout<<x0+d<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--) solve();
     
    return 0;

}

