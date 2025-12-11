//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sq = sqrt(n);
    if(sq*sq == n){
        cout<<0<<" "<<sq<<endl;
    }
    else{
        cout<<-1<<endl;
    }
   
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