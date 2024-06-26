#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   vector<int>v;
   
   for(int i=0,x;i<4;i++){
    cin>>x;
    v.push_back(x);
   }
//    sort(v.begin(),v.end());
//    cout<<v[3]<<endl;

    for(int i=0;i<4;i++){
        for(int i=)
    }

    if((v[0]+v[1]>v[2] and v[1]+v[2]>v[0] and v[2]+v[0]>v[1]) or (v[0]+v[1]>v[3] and v[0]+v[3]>v[1] and v[1]+v[3]>v[0]) or (v[0]+v[2]>v[3] and v[0]+v[3]>v[2] and v[2]+v[3]>v[0]) or (v[1]+v[2]>v[3] and v[1]+v[3]>v[2] and v[2]+v[3]>v[1])){
        cout<<"TRIANGLE"<<endl;
    } 
    else if(){
        cout<<"SEGMENT"<<endl;
    }
    else {
        cout<<"IMPOSSIBLE"<<endl;
    }
     
    return 0;

}