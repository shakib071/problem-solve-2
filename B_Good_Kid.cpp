#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   for(int j=0;j<t;j++){
       
    // int nn;
    // cin>>nn;
    // ll mn = 100,ans=1;
   
    // for(int i=0;i<nn;i++){
    //     ll x;
    //     cin>>x;
    //     mn = min(x,mn);
    //     ans*=x;
    // }

    // ans/=mn;
    // ans*=(mn+1);
    // cout<<ans<<endl;
    int n;
    cin>>n;
    // cout<<n<<endl;
    ll temp =100,ans=1;
    bool first=true;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        // cout<<x;
        temp = min(temp,x);
        if(x==0 and first == true) {
            first= false;
        }
        else {
            ans = ans*x;
        }


         
    }
    // cout<<endl;
    // cout<<temp<<endl;
    if(temp!=0) ans=ans/temp;
    ans=ans*(temp+1);
    cout<<ans<<endl;
   }  
     
    return 0;

}