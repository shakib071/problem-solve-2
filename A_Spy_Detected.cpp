//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;cin>>n;
    map<int,int> mp;
    map<int,int>mp1;
    forn(n){
        int x;cin>>x;
        
            mp[x]++;
            mp1[x]=i+1;
        
        
    }
    for(auto i : mp){
        if(i.second==1) cout<<mp1[i.first]<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;

}