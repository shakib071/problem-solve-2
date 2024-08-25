#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int t;
     cin>>t;

     while(t--){
        string x,y;
        cin>>x;
        cin>>y;
        // cout<<x<<" "<<y<<endl;

        bool status = false;

        for(int i=0;i<x.size();i++){
            if((x[i]>y[i])==status){
                swap(x[i],y[i]);
            }

            if(x[i]!=y[i]) status=true;

        }

        cout<<x<<endl<<y<<endl;

     }
     
    return 0;

}