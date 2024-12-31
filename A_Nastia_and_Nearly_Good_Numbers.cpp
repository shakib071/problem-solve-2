//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    
    if(b==1) cout<<"No"<<endl;
    else{
        cout<<"YES"<<endl<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--){
    solve();
   }  
     
    return 0;

}