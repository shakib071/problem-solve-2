//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool cmp(pair<int,int> &a , pair<int,int> &b){
    if(a.first==b.first) return a.second>b.second;
    else return a.first<b.first;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     vector<pair<int,int>>v;
     map<pair<int,int>,int> mp;
     int ans =-1;
     for(int i=1;i<=n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back(make_pair(l,r));
        mp[make_pair(l,r)]=i;

     }
     sort(v.begin(),v.end(),cmp);

     for(int i=1;i<n-1;i++){
        if(v[i].second <= v[i-1].second || v[i-1].second >=v[i+1].first -1){
            ans=mp[make_pair(v[i].first,v[i].second)];
        }
     }

     if(n>1 and v[n-1].second <= v[n-2].second){
        ans = mp[make_pair(v[n-1].first,v[n-1].second)];
     }

     cout<<ans<<endl;
     
    return 0;

}