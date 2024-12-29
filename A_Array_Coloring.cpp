//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==0) even++;
        else odd++;
    }
    if(odd%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--) solve(); 
     
    return 0;

}