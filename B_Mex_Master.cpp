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
    int n;
    cin>>n;
    int zero=0,flag=0;
    forn(n){
        int x;
        cin>>x;
        if(x==0)zero++;
        if(x>=2)flag=1;

    }
    if(zero<=ceil(float(n)/2)){
        cout<<0<<endl;
    }
    else if(flag || zero==n){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
   }  
     
    return 0;

}