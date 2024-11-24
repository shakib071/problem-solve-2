//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(int n){
    vector<int> p(100001,true);

    int sum=2;

    
    if(sum==n){
        cout<<sum<<endl;
        return;
    }
       vector<int>primes;
       
     cout<<2<<" ";
    for(int i=3;i<=n;i=i+2){
        if(p[i]){
            sum+=i;
            if(sum<=n){
                cout<<i<<"";
            }
            else return;
            
            
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    solve(n);
     
    return 0;

}