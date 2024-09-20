//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

ll solve(ll n){
    if(n<=0) return 1;
    if(n<10) return n;

    return max((n%10)*solve(n/10), 9*solve(n/10-1));
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   ll n;
   cin>>n;

   cout<<solve(n)<<endl;  
     
    return 0;

}