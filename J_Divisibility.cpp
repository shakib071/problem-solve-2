//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int lcmm(){
    int l=6;
    for(int i=4;i<=10;i++ ){
        l=(l*i)/__gcd(l,i);
    }
    return l;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int lcm = lcmm();  
//    cout<<lcm<<endl;
    ll n;
    cin>>n;
    cout<<n/lcm<<endl;

     
    return 0;

}