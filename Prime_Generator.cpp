//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    map<ll,int>p;
   
    // if(b<2) return;
    // if(a<2) a=2;
    for(int i=2;i<=b;i++){
        if(p[i]==0){
            if(i>=a) cout<<i<<endl;
            for(int j=i*i;j<=b;j+=i){
                p[j]=1;
            }
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

    while(t--) {
        solve();
        if(t!=0)cout<<endl;
    }
    return 0;

}