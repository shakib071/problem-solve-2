//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// unordered_map<ll, bool> memo;

// bool dp(ll n){
//     if(n==0) return true;
//     else if(n<11) return false ;
//    if (memo.find(n) != memo.end()) {
//     return memo[n];
//     }
    
//     return memo[n]= dp(n-11) or dp(n-111);
// }

void solve(){
    ll n;
    cin>>n;
    bool ans = false;
    for(int i=0;i<1000000;i++){
        if(n%11==0) {
            ans=true;
            break;
        }
        n-=111;
        if(n<0)break;
    }
    cout<<((ans)?"YES" : "NO")<<endl;
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