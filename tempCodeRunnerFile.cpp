#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int solve(int a , int b){
    if(a>b) return 1;
    if(a==b) return 0;
    if(a<b) return -1;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;
     while(t--){
          int ans = 0;
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         if(solve(a,c) + solve(b,d)>0){
            ans++;
         }
         if(solve(a,d) + solve(b,c)>0){
            ans++;
         }
         if(solve(b,c) + solve(a,d)>0){
            ans++;
         }
         if(solve(b,d) + solve(a,c)>0){
            ans++;
         }


         cout<<ans<<endl;
     }
     
   
     
    return 0;

}