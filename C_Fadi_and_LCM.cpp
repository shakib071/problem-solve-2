//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n;  
   cin>>n;

    ll ans=1;
   for(ll i=1;i*i<=n;i++){
    if(n%i==0 and lcm(i,n/i)==n){
        ans=i;
    }
   }

   cout<<ans<<" "<<n/ans<<endl;
     
    return 0;

}