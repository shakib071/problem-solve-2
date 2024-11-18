//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n,m;
     cin>>n>>m;

     vector<ll> modn(5,0);//mod number save
     vector<ll> modm(5,0);//mod number save

     for(int i=1;i<=n;i++){
        int temp=i%5;
        modn[temp]++;
     }
      for(int i=1;i<=m;i++){
        int temp=i%5;
        modm[temp]++;
     }

    //  cout<<modn[1]<<" "<<modn[2]<<endl;

    ll ans=modn[0]*modm[0];
    
//   cout<<modn[0]<<modm[0]<<endl;
    for(int i=1;i<=4;i++){
        //cout<<modn[i]<<" "<<modm[5-i]<<endl;
        ans=ans+ modn[i]*modm[5-i];
        // ans=ans+min()
    }
    cout<<ans<<endl;
     
    return 0;

}