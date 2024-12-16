//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
      map<string,int> mp;
      string s,ans;
      int mx=0;
    while(t--){
        cin>>s;
        // cout<<s<<endl;
        mp[s]++;
        if(mp[s]>mx){
            ans=s;
            mx=mp[s];
        }
    }
    cout<<ans<<endl;
 



     
    return 0;

}