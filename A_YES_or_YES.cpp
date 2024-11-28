//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){

    string  s1;
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    if(s1=="YES") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t ; cin>>t;

     while(t--)solve();
     
    return 0;

}