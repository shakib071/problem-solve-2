//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    string s;
    cin>>s;
    string ans;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='p'){
            ans+='q';
        }
        else if (s[i]=='q') ans+='p';
        else ans+=s[i];
    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;cin>>t;
     while(t--) solve();
     
    return 0;

}