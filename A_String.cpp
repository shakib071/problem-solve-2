//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void  solve(string s) {
    // cout<<s<<endl;
    int ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')ans++;
    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--) {
    string s;
    cin>>s;
    solve(s);
   }  
     
    return 0;

}