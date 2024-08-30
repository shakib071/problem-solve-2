//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     int n,k,l,c,d,p,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;

     int drink =(k*l)/nl;
     int lime = c*d;
     int salt = p/np;
    //  cout<<drink<<" "<<lime<<" "<<salt<<endl;

     int ans = min(drink,min(lime,salt))/n;
     cout<<ans<<endl;



     
    return 0;

}