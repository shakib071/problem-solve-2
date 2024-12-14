//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
//    cout<<t<<endl;
   while(t--){
     int n;
    cin>>n;
    // cout<<n<<endl;
    map<int,int>mp;
    int elements=n-2;
    bool found = false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        // cout<<x<<" ";
      
        if(elements%x==0 and mp[elements/x]>0 and !found){
            cout<<x<<" "<<elements/x<<endl;
            found=true;
            // break;
            // // return;
        }
        else mp[x]++;
    }
    // cout<<endl;
   } 
     
    return 0;

}