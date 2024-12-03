//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool vis[N];
ll total=0;
ll cat[N];
ll n,m;

void dfs(ll s,ll sum){
    if(vis[s]) return;
    vis[s]=true;

    if(cat[s]) sum++;
    else sum=0;

    if(sum>m) return;

    if(s!=1 && adj[s].size()==1){
        total++;
    }

    for(int i=0;i<adj[s].size();i++){
        dfs(adj[s][i],sum);
    }


}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   
   cin>>n>>m;
   memset(vis,false,sizeof(vis));

   for(int i=1;i<=n;i++){
    cin>>cat[i];
   }

    ll x,y;
   for(int i=0;i<n-1;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
   }

   dfs(1,0);

   cout<<total<<endl;
     
    return 0;

}