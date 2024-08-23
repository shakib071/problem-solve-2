#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n,k;
   cin>>n>>k;
    int ans=0;
     for(int i=1;i<=n;i++){
        if(k%i==0 and (k/i)<=n){
            ans++;
        }
     }
     cout<<ans<<endl;
     
    return 0;

}