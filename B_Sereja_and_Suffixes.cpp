#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n,m;
     cin>>n>>m;

     vector<int>vn;
    //  vector<int>vm;
     map<int,int>mp;
     vector<int>ans(n+1,0);

    //   cout<<ans[2];

     forn(n){
        ll x;
        cin>>x;
        vn.push_back(x);
     }

     for(int i=n-1;i>=0;i--){
        if(!mp[vn[i]]){
            ans[i]=ans[i+1]+1;
            mp[vn[i]]++;
        }
        else{
            ans[i]=ans[i+1];
        }
     }

      for(int i=0,xx;i<m;i++){
        cin>>xx;
        cout<<ans[xx-1]<<endl;
     }



     
    return 0;

}