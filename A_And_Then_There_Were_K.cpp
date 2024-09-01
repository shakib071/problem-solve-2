//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


void solve(){
    ll n;cin>>n;
    int cnt=0;
    while(n!=0){
        n=n/2;
        cnt++;
    }
    // cout<<cnt<<endl;
    cout<<(1<<(cnt-1))-1<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;
     while(t--){
        solve();
     }
     
    return 0;

}