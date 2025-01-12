//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    
    int t;cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        if(a%2==b%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
     
    return 0;

}