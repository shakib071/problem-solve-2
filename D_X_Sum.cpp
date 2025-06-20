//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool valid(int i,int j,int n,int m){
    return i>=0 && i<n && j>=0 && j<m;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    ll ans=0;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int ci = i , cj = j;
            ll current =0;
             // left up diagonal
            while(valid(ci,cj,n,m)){
                current += a[ci][cj];
                ci--;
                cj--;
            }
         
            //right up diagonal
             ci = i , cj = j;
            while(valid(ci,cj,n,m)){
                current += a[ci][cj];
                ci--;
                cj++;
            }

            //left down diagonal
            ci = i , cj = j;
            while(valid(ci,cj,n,m)){
                current += a[ci][cj];
                ci++;
                cj--;
            }

            //right down diagonal
            ci = i , cj = j;
            while(valid(ci,cj,n,m)){
                current += a[ci][cj];
                ci++;
                cj++;
            }
            current -= 3*a[i][j];
            ans = max(ans,current);
        }
    }

    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   
   while(t--){
        solve();
   }
     
    return 0;

}