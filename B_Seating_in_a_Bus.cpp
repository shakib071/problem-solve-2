#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int l=v[0],r=v[0];
    bool bad = false;

    for(int i=1;i<n;i++){
        if(v[i]==l-1)l--;
        else if(v[i]==r+1)r++;
        else bad = true;
    }
    cout<<(bad ? "NO" : "YES")<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;
     while(t--){
        solve();
     }
     
    return 0;

}