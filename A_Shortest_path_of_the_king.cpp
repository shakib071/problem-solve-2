//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool vis[10][10];
int dis[10][10];
pair<int,int> parent[10][10];
int n=8,m=8;

vector<pair<int,int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0},{1,1},{1,-1},{-1,1},{-1,-1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    parent[si][sj]={si,sj};

    while(!q.empty()){

        pair<int,int>par= q.front();
        int a=par.first,b=par.second;
        q.pop();

        for(int i=0;i<8;i++){
            int ci= a+d[i].first;
            int cj=b+d[i].second;
            if(valid(ci,cj)==true and vis[ci][cj]==false){
                q.push({ci,cj});
                parent[ci][cj]={a,b};
                vis[ci][cj]=true;
                dis[ci][cj]=dis[a][b]+1;
            }
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            parent[i][j]={-1,-1};
        }
    }
   string s,t;

   cin>>s>>t;
    int sj=s[0]-'a',si=s[1]-'0'-1;
    int dj=t[0]-'a',di=t[1]-'0'-1;
    // cout<<di<<" "<<dj<<endl;

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    bfs(si,sj);
    cout<<dis[di][dj]<<endl;
    vector<pair<int,int>>path;

     path.push_back({di,dj});
    while(di!=si or dj!=sj){
        //cout<<parent[di][dj].first<<parent[di][dj].second<<endl;
       path.push_back({parent[di][dj].first,parent[di][dj].second});
        di=parent[di][dj].first;
        dj=parent[di][dj].second;
    }
    int temp1=si,temp2=sj;
    //cout<<si<<sj<<endl;
    for(int i=path.size()-2;i>=0;i--){
        //cout<<path[i].first<<" "<<path[i].second<<endl;
        //{{0, 1}, {0, -1}, {-1, 0}, {1, 0},{1,1},{1,-1},{-1,1},{-1,-1}};
        // if(si+d[0].first==path[i].first and si+d[0].second==path[i].second)cout<<"U"<<endl;
        // if(si+d[1].first==path[i].first and si+d[1].second==path[i].second)cout<<"D"<<endl;
        // if(si+d[2].first==path[i].first and si+d[2].second==path[i].second)cout<<"L"<<endl;
        // if(si+d[3].first==path[i].first and si+d[3].second==path[i].second)cout<<"R"<<endl;
        // if(si+d[4].first==path[i].first and si+d[4].second==path[i].second)cout<<"RU"<<endl;
        // if(si+d[5].first==path[i].first and si+d[5].second==path[i].second)cout<<"RD"<<endl;
        // if(si+d[6].first==path[i].first and si+d[6].second==path[i].second)cout<<"LU"<<endl;
        // if(si+d[7].first==path[i].first and si+d[7].second==path[i].second)cout<<"LD"<<endl;
         
         if(si-1 == path[i].first and sj+1==path[i].second) cout<<"RD"<<endl;
         else if(si+1 == path[i].first and sj==path[i].second) cout<<"U"<<endl;
        else if(si-1 == path[i].first and sj==path[i].second) cout<<"D"<<endl;
        else if(si == path[i].first and sj+1==path[i].second) cout<<"R"<<endl;
        else if(si== path[i].first and sj-1==path[i].second) cout<<"L"<<endl;
        else if(si+1== path[i].first and sj+1==path[i].second) cout<<"RU"<<endl;
        else if(si+1== path[i].first and sj-1==path[i].second) cout<<"LU"<<endl;
        else if(si-1== path[i].first and sj-1==path[i].second) cout<<"LD"<<endl;
        si=path[i].first;
        sj=path[i].second;

    }

     
    return 0;

}