//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int>v1;
    vector<pair<int,int>>v2;

    for(int i=0,x;i<n;i++){
        cin>>x;
        v1.push_back(x);
        v2.push_back(make_pair(x,i));
    }
    sort(v2.begin(),v2.end());

    cout<<v2[0].first<<v2[n-1].first<<endl;
    cout<<v2[0].second<<v2[n-1].second<<endl;
    bool turtle = true;
    for(int i=0;i<n;i++){
        if(turtle){
            turtle = !turtle;
            
        }
        else{

        }
    }



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