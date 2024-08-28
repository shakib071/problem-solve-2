//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;cin>>t;

     while(t--){
        ll n,k;
        cin>>n>>k;
        
        k--;
        ll ans;
        if(n%2==0){
            ans=k%n;
            
        }
        else{
            ll mid = n/2;
            ans=((k/mid)+k)%n;
        }
        cout<<ans+1<<endl;
     }
     
    return 0;

}