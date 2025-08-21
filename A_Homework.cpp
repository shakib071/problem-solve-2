//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   
   while(t--){
    int n,m;
    string a,b,c;
    cin>>n>>a>>m>>b>>c;
   

    string ans = a;
    for(int i=0;i<b.length();i++){
        if(c[i]=='D'){
            ans = ans + b[i];
        }
        else{
            ans = b[i] + ans ;
        }
    }

    cout<<ans<<endl;
   }
     
    return 0;

}