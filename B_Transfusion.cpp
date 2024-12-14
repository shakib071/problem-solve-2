//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    ll n;cin>>n;
    ll odd=(n%2==1) ? n/2+1 : n/2;
    ll even=n/2;
    ll evnsum=0,oddsum=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i%2==1) oddsum+=x;
        else evnsum +=x;
    }
    // cout<<evnsum<<" "<<oddsum<<" "<<even<<" "<<odd<<endl;
    // cout<<float(oddsum/odd)<<" "<<float(evnsum/even)<<endl;
    // if(oddsum/odd == evnsum/even)cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
    if(oddsum% odd or evnsum % even or oddsum/odd != evnsum/even) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--) solve();  
     
    return 0;

}