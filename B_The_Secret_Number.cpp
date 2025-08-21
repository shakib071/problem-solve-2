//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll powerten(int p , int k){
    ll ans = 1;
    while(k--){
        ans = ans * p;
    }
    return ans;
}

void solve(ll n){
    map<ll,ll>mp;
    vector<ll>ans;
    for(int i=1;i<=19;i++){
        ll div = 1 + powerten(10,i);
        if(div>n){
            break;
        }

        if(n%div == 0){
            ll xx = n/div;
            if(!mp[xx]){
                ans.push_back(xx);
                mp[xx]++;
            }

            
        }
    }
    int len = ans.size();

    cout<<len<<endl;

    if(len){
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   
   while (t--)
   {
    ll n;
    cin>>n ;
    solve(n);
   }
   
     
    return 0;

}