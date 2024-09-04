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
    int m,x,y;
    cin>>m>>x>>y;
    int d=y-x;
    

    for(int i=1;i<=d;i++){
        if(d%i==0 and d/i +1 <=m){
            d=i;
            break;
        }
    }
    int n=((y-x)/d)+1;
    // cout<<d<<endl;
    while(x-d>0 and n<m){
        x=x-d;
        n++;
    }
    // cout<<x<<" "<<d<<endl;
    for(int i=1;i<=m;i++){
        cout<<x<<" ";
        x=x+d;
    }
    cout<<endl;
   }  
     
    return 0;

}