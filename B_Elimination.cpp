//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;

   while(n--){
    int a,b,c,d;cin>>a>>b>>c>>d;
    cout<<max(a+b,c+d)<<endl;
   }  
     
    return 0;

}