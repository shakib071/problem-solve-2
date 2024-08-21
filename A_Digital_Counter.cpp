#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   map<int,int>mp;
   mp[0]=2;mp[1]=7;mp[2]=2;mp[4]=3;mp[5]=4;
   mp[6]=2;mp[7]=5;mp[8]=1;mp[9]=2;mp[3]=3;

   int n;
   cin>>n;
//    int f=n%10,s=n/10;
//    cout<<f<<" "<<s<<endl;
//    cout<<mp[f] <<" "<<mp[s]<<endl;
   cout<<mp[(n%10)]*mp[(n/10)]<<endl;
     
    return 0;

}