//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n,a,b;
   cin>>n>>a>>b;
   if(n-a<=b)
    cout<<n-a<<endl;
    else cout<<b+1<<endl;
     
    return 0;

}