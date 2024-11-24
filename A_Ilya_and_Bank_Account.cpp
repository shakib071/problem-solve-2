//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin>>n;
    // cout<<min(0,0)<<endl;

    if(n>=0) cout<<n<<endl;
    else{
        n=n*(-1);
        // cout<<n<<endl;
        int t1=n%10;
        n=n/10;
        // cout<<n<<t1<<endl;
        int t2=n%10;
        n=n/10;
        //  cout<<t2<<endl;
        cout<< -(n*10+(min(t1,t2)))<<endl;
    }  
     
    return 0;

}