//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   
   while(t--){
    int n;
    cin>>n;
    vector<ll>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<int>());
    ll ans = 0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            ans +=v[i];
        }
    }

    cout<<ans<<endl;    
   }
     
    return 0;

}