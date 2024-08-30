//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// vector<bool> prime(32000,true);
// vector<int> storeprime;
// void seive(){

//     prime[0]=false; prime[0]=false;

//     for(int i=2;i<32000;i++){
        
//         if(prime[i]){
//             storeprime.push_back(i);
//             for(int j=i+i;j<32000;j=j+i){
//                 prime[j]=false;
//             }
//         }
//     }
// }

vector<int> factor (int n){
    vector<int> v;
    int i=0;
    for(int i=2;i*i<=n;i++){
        
        if(n%i==0){
            v.push_back(i);
            n=n/i;
            if(v.size()>=2) return v;
        }
      
        
    }
    
    
    return v;
}

void solve(){
    int n;
    cin>>n;
    vector<int> factorv =factor(n);

    if(factorv.size()>=2){
       
        int _3rd = n/(factorv[0]*factorv[1]);
        if(_3rd!=factorv[0] and _3rd!=factorv[1] and _3rd>=2)
            cout<<"YES"<<endl<<factorv[0]<<" "<<factorv[1]<<" "<<_3rd<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    //  seive();
    //  cout<<storeprime.size();
    //  cout<<prime[20029]<<endl;

    int t;
    cin>>t;
    while(t--){
        solve();
    }

     
    return 0;

}