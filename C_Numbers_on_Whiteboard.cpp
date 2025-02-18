//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    cout<<2<<endl;

    cout<<n<<" "<<n-1<<endl;

    for(int i=n-2;i>=1;i--){
        cout<<n<<" "<<i<<endl;
        n=(n+i+1)/2;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;  
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;

}