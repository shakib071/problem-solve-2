//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    bool ans=false;
    for(int i=0;i<n-2;i++){
        int x =v[i],y=v[i+1],z=v[i+2];
        if((2*x > y and 2*y > x) or (x+y>z and y+z>x and x+z>y)){
            ans = true;
            break;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else{
        if(v.size()>=2 and ((2*v[v.size()-1])>v[v.size()-2]) and (2*v[v.size()-2])>v[v.size()-1]){
            cout<<"YES"<<endl;
        }
        else cout<< "NO"<<endl;
    }
}


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t; cin>>t;
    while(t--) solve();  
     
    return 0;

}