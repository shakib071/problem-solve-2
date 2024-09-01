//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     string s;
     cin>>s;
     map<char,int>mp;
    //  mp[s[0]]++;
     char ans = 'a';
     for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(s[i]>ans){
            ans=s[i];
        }
     }
    //  cout<<ans<<" "<<mp[ans]<<endl;

   forn(mp[ans]) cout<<ans;
//    cout<<endl;
     
    return 0;

}