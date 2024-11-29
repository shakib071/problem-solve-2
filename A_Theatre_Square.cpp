//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n,m,a;
     cin>>n>>m>>a;
     ll ans1=n/a;
     ll ans2=m/a;
     ans1+=(n%a!=0) ? 1 : 0;
     ans2+=(m%a!=0) ? 1 : 0;
     
     cout<<ans1*ans2<<endl;
     
    return 0;

}