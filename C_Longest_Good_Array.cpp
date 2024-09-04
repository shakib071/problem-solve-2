//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


ll solve(){
    ll a,b;
    cin>>a>>b;
    b-=a;

    ll l=2, r = 1000000000;

    while(l<r){
       ll mid = (l+r)/2;

       if((mid*(mid-1)/2)<=b){
         l = mid+1;
       }
       else {
         r= mid;
       }
    }
    return l-1;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    cout<<solve()<<endl;
   }  
     
    return 0;

}