// //Code by shakib071
// #include<bits/stdc++.h>
// #define ll long long int
// #define forn(n) for(int i=0;i<n;i++)
// using namespace std;
// int n,m;

// const int N = 1e4 + 5;
// // vector<vector<char>>a;

// // vector<vector<bool>>vis;
// // vector<vector<bool>>dis;
// char a[N][N];
// bool vis[N][N];
// int dis[N][N];
// pair<int,char>step[N][N];//size and direction
// vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
// bool valid(int i,int j){
//     if(i<0 || i>=n || j<0 || j>=m) return false;
//     return true;
// }

// void bfs(int si,int sj){
//   queue<pair<int,int>>q;
//   q.push({si,sj});
//   vis[si][sj]=true;
//   dis[si][sj]=0;
  
//    while(!q.empty()){
//     pair<int,int> par = q.front();
//     int aa=par.first,bb=par.second;
//     q.pop();
//     for(int i=0;i<4;i++){
//         int ci=aa+d[i].first;
//         int cj=bb+d[i].second;
       
        
        
//         if(valid(ci,cj)==true and vis[ci][cj]==false and a[ci][cj] != '#'){
//              if(i==0){
//                 step[ci][cj].second='r';
//             }
//              if(i==1){
//                 step[ci][cj].second='l';
//             }
//             if(i==2){
//                 step[ci][cj].second='u';
//             }
//             if(i==3){
//                 step[ci][cj].second='d';
//             }
            
//             if(step[aa][bb].second==step[ci][cj].second){
//                 step[ci][cj].first = step[aa][bb].first+1;
//             }
//             q.push({ci,cj});
//             vis[ci][cj]=true;
//             if(step[ci][cj].first==4){
//                 dis[ci][cj]=dis[aa][bb]+3;
//                 step[ci][cj].first=2;
//                 step[aa][bb].first=1;
//             }
//             else{
//                 dis[ci][cj]=dis[aa][bb]+1; 
//             }
            

//         }
//     }
//    }
// }


// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
     
//      cin>>n>>m;
//      int di,dj,ri,rj;
//       for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             step[i][j] = make_pair(1, 'o');
//         }
//     }

//     // step[0][0].first+=1;
//     // cout<<step[0][0].first<<endl;

//     //   char a[n][m];
    

//     //    for (int i = 0; i < n; i++){
//     //     vector<char>row;
//     //     for (int j = 0; j < m; j++){
//     //         char x; cin>>x;
//     //         if(x=='S')
//     //         row.push_back(x);
//     //     }
//     //     a.push_back(row);
//     //    }

//      for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin>> a[i][j];
//             if(a[i][j]=='S'){
//                 ri=i;rj=j;
//             }
//             if(a[i][j]=='T'){
//                 di=i;dj=j;
//             }

//         }
//      }
//     memset(vis, false, sizeof(vis));
//     memset(dis, -1, sizeof(dis));
//     bfs(ri,rj);
   
//     //    for (int i = 0; i < n; i++){
//     //     for (int j = 0; j < m; j++){
//     //         cout<< step[i][j].second;
//     //     }
//     //     cout<<endl;
//     //   }

//      cout<<dis[di][dj];
//     return 0;

// }


//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int n,m;

const int N = 1e4 + 5;
// vector<vector<char>>a;

// vector<vector<bool>>vis;
// vector<vector<bool>>dis;
// char a[N][N];
// bool vis[N][N];
// int dis[N][N];
// pair<int,char>step[N][N];//size and direction
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}

void bfs(){

    cin>>n>>m;
    char a[n][m];
    bool vis[n][m];
    int dis[n][m];


    pair<int,char>step[n][m];
     int di,dj,si,sj;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            step[i][j] = make_pair(1, 'o');
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> a[i][j];
            if(a[i][j]=='S'){
                si=i;sj=j;
            }
            if(a[i][j]=='T'){
                di=i;dj=j;
            }

        }
     }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

  queue<pair<int,int>>q;
  q.push({si,sj});
  vis[si][sj]=true;
  dis[si][sj]=0;
  
   while(!q.empty()){
    pair<int,int> par = q.front();
    int aa=par.first,bb=par.second;
    q.pop();
    for(int i=0;i<4;i++){
        int ci=aa+d[i].first;
        int cj=bb+d[i].second;
       
        
        
        if(valid(ci,cj)==true and vis[ci][cj]==false and a[ci][cj] != '#'){
             if(i==0){
                step[ci][cj].second='r';
            }
             if(i==1){
                step[ci][cj].second='l';
            }
            if(i==2){
                step[ci][cj].second='u';
            }
            if(i==3){
                step[ci][cj].second='d';
            }
            
            if(step[aa][bb].second==step[ci][cj].second){
                step[ci][cj].first = step[aa][bb].first+1;
            }
            q.push({ci,cj});
            vis[ci][cj]=true;
            if(step[ci][cj].first==4){
                if(a[ci][cj]=='T'){
                  dis[ci][cj]=dis[aa][bb]+1;
                  break;
                }
                else dis[ci][cj]=dis[aa][bb]+3;
                step[ci][cj].first=2;
                step[aa][bb].first=1;
            }
            else{
                dis[ci][cj]=dis[aa][bb]+1; 
            }
            if(ci==di and cj==dj) break;

            
            

        }
    }
   }
    cout<<dis[di][dj];
  
}


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     


    // step[0][0].first+=1;
    // cout<<step[0][0].first<<endl;

    //   char a[n][m];
    

    //    for (int i = 0; i < n; i++){
    //     vector<char>row;
    //     for (int j = 0; j < m; j++){
    //         char x; cin>>x;
    //         if(x=='S')
    //         row.push_back(x);
    //     }
    //     a.push_back(row);
    //    }

     bfs();

    // bfs(ri,rj);
   
    //    for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         cout<< step[i][j].second;
    //     }
    //     cout<<endl;
    //   }

     
    return 0;

}