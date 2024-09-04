//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll divisor(ll n,ll k){
    
  
    ll div =1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0 and i<=k){
            ll temp = n/i;
            ll d1= min(i,temp);
            ll d2=max(i,temp);
            if(d1<=k){
                div= max(d1,div);
            } 

            if(d2<=k){
                div=max(d2,div);
            } 
        } 
        
        
    }
    return div;
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    ll n,k;
    cin>>n>>k;
      if(n%k==0){
        cout<<n/k<<endl;
        continue;
      } 
    if(n<=k) {
        cout<<1<<endl;
        continue;
    }
    ll div = divisor(n,k);

    cout<<n/div<<endl;
    // cout<<div<<endl;
   }  
     
    return 0;

}