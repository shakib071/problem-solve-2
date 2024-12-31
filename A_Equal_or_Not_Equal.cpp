//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    string s;
    cin>>s;
    cout<<(count(s.begin(),s.end(),'N')!=1 ? "YES": "NO");
    cout<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve();  
     
    return 0;

}