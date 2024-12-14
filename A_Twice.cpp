//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    // vector<int>v;
    map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        // v.push_back(x);
        
        // sort(v.begin(),v.end());

        if(mp[x]){
            ans++;
            mp[x]--;
        }
        else mp[x]++;

    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve();  
     
    return 0;

}