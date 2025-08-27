//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int l,r;
    cin>>l>>r;
    if(2*l>r){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        cout<<l<<" "<<2*l<<endl;
    }
   }  
     
    return 0;

}