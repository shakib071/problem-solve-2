//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    int ans=0;
     while(n){
        ans+=(n%k);
        n/=k;
     }
     cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve();  
     
    return 0;

}