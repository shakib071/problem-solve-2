//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int k,r;
   cin>>k>>r;
   int count = 1;
   int tenmod=k%10;
   int tmp=tenmod;
   while(tenmod%10!=0 and tenmod%10 !=r) {
        count++;
        tenmod+=tmp;
   }
   cout<<count<<endl;
     
    return 0;

}