//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0;
    int m1,m2;
    if(m>=a){
        ans+=a;
        m1=m-a;
    }
    else{
        ans+=m;
        m1=0;
    }
    if(m>=b){
        ans+=b;
        m2=m-b;
    }
    else{
        ans+=m;
        m2=0;
    }
    if((m1+m2>=c)){
        ans+=c;
    }
    else{
        ans+=(m1+m2);
    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve();  
     
    return 0;

}