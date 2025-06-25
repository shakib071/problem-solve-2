//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0,x;i<n;i++){
        cin>>x;
        sum+=x;

       

    }

     ll sq= sqrt(sum);
     if(sq*sq == sum) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   
 int t;
 cin>>t;

 while(t--) solve();
     
    return 0;

}