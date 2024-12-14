//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--){
    int n,x;
    cin>>n>>x;
    int cnt=0; bool add=true;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.size()<=x and add){
            x-=s.size();
            cnt++;
        }
        else add=false;
    }

    cout<<cnt<<endl;
   }  
     
    return 0;

}