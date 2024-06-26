#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


void solve(){
    string s;
    cin>>s;
    // cout<<s<<endl;
    bool ans=false;
    for(int i=0;i<(s.size()-1);i++){
        if(s[i]=='i' and s[i+1]=='t') ans=true;
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--) solve();
     
    return 0;

}