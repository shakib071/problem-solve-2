#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int solve(int n){
    int sum = n%10;
    n=n/10;
    sum=sum+n;
    return sum;

}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
   }  
     
    return 0;

}