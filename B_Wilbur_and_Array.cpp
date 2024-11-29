//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n;
   cin>>n;
//    vector<int> a(n,0);
//    vector<int> b;
   ll ans=0;
   
   ll cur = 0;
 
   for(int i=0,x;i<n;i++){
    cin>>x;
    ans+=abs(cur-x);
    cur=x;
   }
   cout<<ans<<endl;
     
    return 0;

}