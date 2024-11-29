//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
   string s;
   cin>>s;
   map<char,string> mp;
   mp['0']="";
   mp['1']="";
   mp['2']="2";
   mp['3']="3";
   mp['4']="322";
   mp['5']="5";
   mp['6']="53";
   mp['7']="7";
   mp['8']="7222";
   mp['9']="7332";
    string ans="";
   forn(n){
    ans+=mp[s[i]];
   }
    sort(ans.begin(),ans.end(),greater<int>());
   cout<<ans<<endl;

     
    return 0;

}