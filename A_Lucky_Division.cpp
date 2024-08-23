#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool solve(int nn){
    int n=nn;
    while(n){
        if(n%10!=4 and n%10 != 7){
            return false;
        }
        n=n/10;
    }

    return true;
}

bool solve2(int n){
    for(int i=1;i<=n;i++){
        if(solve(i)==true and n%i==0) return true;
    }
    return false;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;

     if(solve2(n))cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     
    return 0;

}