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
        ll n,k;
        cin>>n>>k;
        if(k==1){
            cout<<1<<endl;
            continue;
        }
        if(n>k){
            if(n%k>0)cout<<1+1<<endl;
            else cout<<1<<endl;
        }
        else{
            if(k%n>0) cout<<(k/n)+1<<endl;
            else cout<<k/n<<endl;
        }
     } 
     
    return 0;

}


// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   int t; cin >> t;
//   while(t--) {
//     long long n, k;
//     cin >> n >> k;
    
//     long long cf = (n + k - 1) / k;
//     k *= cf;
    
//     cout << (k + n - 1) / n << endl;
//   }
//   return 0;
// }