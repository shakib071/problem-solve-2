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
    ll n;
    cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else cout<< n/2 + 1<<endl;
   }  
     
    return 0;

}