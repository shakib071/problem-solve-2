#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


bool solve(){
    string s;
    cin>>s;
    if(s.length()>=3){
        if(s[0]=='1' and s[1]=='0' and s[2]!= '0'){
            int sum = 0;
        for(int i=2;i<s.length();i++){
            int p = s[i]-'0';
            // cout<<p<<endl;
            sum= sum*10 + p;
        }
          if(sum>=2) return true;
          else return false;

        }
        
        else {
            return false;
        }
        
    }
    else return false;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--){
       
        if(solve())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     
    return 0;

}