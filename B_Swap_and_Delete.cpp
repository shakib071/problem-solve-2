//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    string s;
    cin>>s;map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    string t="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' and mp['1']>0){
            t+="1";
            mp['1']--;
        }
        else if(s[i]=='1' and mp['0']>0){
            t+="0";
            mp['0']--;
        }
        else break;
    }
    cout<<(s.size()-t.size())<<endl;
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