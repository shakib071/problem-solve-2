//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int lcm(int a,int b){
    int g = __gcd(a,b);
    return (a*b)/g;
}

void solve(){
    int n;
    cin>>n;

    vector<int>a; a.push_back(1);

    for(int i=0,x;i<n;i++){
        cin>>x;a.push_back(x);
    }
    a.push_back(1);

    vector<int>b(n+1,1);

    for(int i=1;i<=n+1;i++){
        b[i-1]=lcm(a[i-1],a[i]);
    }
    
    for(int i=0;i<n;i++){
        if(__gcd(b[i],b[i+1])!=a[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--) solve();
     
    return 0;

}