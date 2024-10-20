//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a;
    for(int i=0,x;i<n;i++){
        cin>>x;a.push_back(x);
    }
    int one=0,zero = 0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        if(a[i]!=x){
            if(a[i]==1)one++;
            else zero++;
        }
    }
    if(one==0 and zero==0){
        cout<<0<<endl;
    }
    else if(one==0 or zero==0){
        cout<<max(one,zero)<<endl;
    }
    else {
        cout<<1+abs(one-zero)<<endl;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;

   while(t--) solve();  
     
    return 0;

}