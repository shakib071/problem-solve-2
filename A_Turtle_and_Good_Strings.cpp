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
    int n;cin>>n;
    string s;
    cin>>s;

    if(s[0]!=s[n-1])cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    // bool another= false;
    // vector<int>v;
    // for(int i=1;i<n-1;i++){
    //     if(s[i]!=s[i-1]){
    //         v.push_back(i);
    //     }
    // }

    // if(v.size()==0){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     for(int i=0;i<v.size();i++){
    //         cout<<v[i]<<" ";
    //     }
    //     cout<<"kori nai"<<endl;
    // }
   }
     
    return 0;

}