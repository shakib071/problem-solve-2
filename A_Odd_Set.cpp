#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    // map<int,int> mp;
int n;cin>>n;
     int odd=0,even=0;
     
     for(int i=0,x;i<2*n;i++){
        cin>>x;
        // cout<<mp[x]<<endl;
        // if(mp[x]==0){
            // mp[x]++;
            if(x%2==0) even++;
            else odd++;
        // }
        
     }

     if(even == odd) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
     
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--) {
    solve();
   }
     
    return 0;

}