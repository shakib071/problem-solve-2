//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;

   while(t--){
    int a,b;
    cin>>a>>b;
    if(a%2==0 and b%2==0) cout<<"YES"<<endl;
    else if(a%2==1 and b%2==1) cout<<"NO"<<endl;
    else if(a%2==1 and b%2==0) cout<<"NO"<<endl;
    else if(a!=0 and a%2==0 and b%2==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
   }  
     
    return 0;

}