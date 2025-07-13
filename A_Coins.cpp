//Code by shakib071
//https://codeforces.com/profile/shakib071
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
        
        if((n%2==1 and k%2==1 and n>=k) or n%2==0 ){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
       
    }
     
    return 0;

}