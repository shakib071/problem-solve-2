//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0,x;i<n;i++){
        cin>>x;
        if(x!=n){
            v[i]=x+1;
        }
        else v[i]=1;
    }
   
    forn(n) cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve();  
     
    return 0;

}