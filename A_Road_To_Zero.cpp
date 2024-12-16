//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll x,y,a,b;
    cin>>x>>y;
    cin>>a>>b;
    if(2*a <=b){
        cout<<(x+y)*a<<endl;
    }
    else{
        ll mn=min(x,y);
        ll ans=(mn*b)+(abs(x-y)*a);
        cout<<ans<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--)  solve();
    return 0;

}