#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    string s,t;
    cin>>s;
    cin>>t;
    
    int ptr=0;

    for(int i=0;i<s.length();i++){
        if(ptr<t.length() and s[i]=='?'){
            s[i]=t[ptr];
        }
        else if(ptr>=t.length() and s[i]=='?'){
            s[i]='a';
        }
        if(ptr<t.length() and s[i]==t[ptr]){
            ptr++;
        }
    }
    if(ptr==t.length()){
        cout<<"YES"<<endl<<s<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    

   }  
     
    return 0;

}