#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     bool odd=false;

     forn(n){
        int x;
        cin>>x;
        if(x%2==1) odd=true;
     }

     if(odd) cout<<"First"<<endl;
     else cout<<"Second"<<endl;
     
    return 0;

}