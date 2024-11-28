//Code by shakib071


#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
const int N=4005;
vector<int>me(N,-1);
int  n,a,b,c;

//kaj kore 
int dp(int n){
    
    if(n==0) return 0;
    if(n<0 ) return -INT_MAX;
    if(me[n]!=-1) return  me[n];
    int p=dp(n-a);
    int q=dp(n-b);
    int r=dp(n-c);
    
    return me[n]= max(p,max(q,r))+1;
}



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    
     cin>>n>>a>>b>>c;
    
    
     cout<<dp(n)<<endl;
    return 0;

}

