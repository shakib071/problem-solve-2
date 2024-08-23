#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n,m;cin>>n>>m;

    int ans=0;

   while(n>0 and m>0){

    if(n==1 and m==1) break;
    if(n<m){
        n--;m-=2;
    }
    else{
        n-=2;m--;
    }
    ans++;
   }  

   cout<<ans<<endl;
     
    return 0;

}