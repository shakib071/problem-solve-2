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
    ll mn = 100,ans=1;
   
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mn = min(x,mn);
        ans*=x;
    }

    ans/=mn;
    ans*=(mn+1);
    cout<<ans<<endl;



   }  
     
    return 0;

}