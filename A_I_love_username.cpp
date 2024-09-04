//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
    int x;cin>>x;
    int mx=x,mn=x;
    n--;
    int amz=0;
    while(n--){
        cin>>x;
        if(x>mx){
            amz++;
            mx=x;
        }

        if(x<mn){
            amz++;
            mn=x;
        }
    }
    cout<<amz<<endl;
     
    return 0;

}