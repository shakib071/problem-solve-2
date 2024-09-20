//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    map<int,int>mp;
    int count=0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        if(mp[x]){
            count++;
        }
        mp[x]++;
    }
     if(count%2==0)cout<<n-count<<endl;
     else cout<<n-count-1<<endl;
   }  
     
    return 0;

}