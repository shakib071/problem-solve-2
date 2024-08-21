#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;


bool solve(int a){
    int pow=0;
    

    while(a>=100){
        
            pow =pow + (a%10)*10;
            a=a/10;
            // if(a==100) 
        
    }
    cout<<pow<<endl;
    return false;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--){
        int a;
        cin>>a;
        if(solve(a))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     
    return 0;

}