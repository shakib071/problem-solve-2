#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll k,n;
     cin>>k;
     cin>>n;

     bool ans= false;
       ll mul = k;
        int count = 0;
        ll i=k;
        while(i<=n){
        // cout<<mul<<endl;
        if(i==n) ans=true;
        mul=mul*k;
        count++;
        i=i*k;
        if(i==n) ans=true;

     }
     if(ans){
        cout<<"YES"<<endl<<count-1<<endl;
     }
     else cout<<"NO"<<endl;
     
    return 0;

}