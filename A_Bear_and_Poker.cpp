// #include<bits/stdc++.h>
// #define ll long long int
// #define forn(n) for(int i=0;i<n;i++)
// using namespace std;

// ll gcd(ll a,ll b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }


// ll lcm(ll a, ll b){
//     // cout<<(a*b)/gcd(a,b)<<endl;
//     return ((a*b)/gcd(a,b));
// }

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//    int n;
//    cin>>n;
//    vector<ll>v;
//    for(int i=0;i<n;i++){
//     ll x;
//     cin>>x;
//     v.push_back(x);

//    }

// //    forn(n) cout<<v[i]<<" ";
// // cout<<gcd(v[0],v[1])<<endl;
//    ll lcmm=lcm(v[0],v[1]);
// //    cout<<lcmm<<endl;

//    for(int i=2;i<n;i++){
//      lcmm = lcm(lcmm,v[i]);
//     }

// //    cout<<lcmm<<endl;

//     bool ans=true;
//     for(int i=0;i<n;i++){
//         if(lcmm/v[i]>3){
//             ans=false;
//         }
//     }

//     if(ans) cout<<"Yes"<<endl;
//     else cout<<"No"<<endl;
     
//     return 0;

// }

//thik acea kintu eto boro number rakha jacche na multiplication er por

#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;
     vector<int> v;

     for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);

        while(v[i]%2==0)v[i]/=2;
        while(v[i]%3==0)v[i]/=3;

     }
     bool ans= true;
     for(int i=1;i<n;i++){
        if(v[i]!=v[0]) ans=false;
     }

     if(ans) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
     
    return 0;

}