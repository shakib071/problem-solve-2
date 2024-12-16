//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    string t;
    cin>>t;
    map<char,int>mp;
    for(int i=0;i<t.size();i++){
        mp[t[i]]++;
    }
    if(mp['0']==0 or mp['1']==0){
        cout<<t<<endl;
    }
    else{
        string s="";
        s+=t[0];
        for(int i=1;i<t.size();i++){
            if(t[i]==t[i-1]){
                s+= (t[i-1]=='0')?'1' : '0';
                s+=t[i];
            }
            else{
                s+=t[i];
            }
            // cout<<s<<endl;
        }
        cout<<s<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--) solve();  
     
    return 0;

}