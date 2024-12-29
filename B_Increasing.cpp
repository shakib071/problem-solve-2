//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    map<int,int>mp;
    int n;cin>>n;
    bool yes=true;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(!mp[x]){
            mp[x]++;
        }
        else {
            yes=false;
        }
    }

    if(yes)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
  

   int t;
   cin>>t;

   while (t--)
   {
    solve();
   }
     
     
    return 0;

}