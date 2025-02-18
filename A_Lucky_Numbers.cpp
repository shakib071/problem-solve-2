//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


void solve(){
    int l,r;
    cin>>l>>r;
    int mx = 0,ans = l;


   for(int i=l;i<=r;i++){
        string s=to_string(i);
        sort(s.begin(),s.end());
        int x = s[s.size()-1] - s[0];

        if(x>mx){
            mx = x;
            ans = i;
        }
        if(mx==9) break;
   }
   cout<<ans<<endl;
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