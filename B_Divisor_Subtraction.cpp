//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll div(ll n){

    for(ll i=3;i*i<=n;i++){
        if(n%i==0) return i;
    }
    return n;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n;
   cin>>n;
    ll cnt=0;
   if(n%2!=0){
    n-=div(n);
    cnt++;
   }  

   cout<<cnt+(n/2)<<endl;     
    return 0;

}