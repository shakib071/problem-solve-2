#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int  a , b, c;
   cin>>a>>b>>c;

   cout<<max(a,max(b,c))-min(a,min(b,c))<<endl;  
     
    return 0;

}