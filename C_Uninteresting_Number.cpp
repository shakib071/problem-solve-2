//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    string s;
    cin>>s;
    int modsum=0,two=0,three=0;
    for(int i=s.size()-1;i>=0;i--){
        int t= s[i]-'0';
        modsum = (modsum+t)%9;
        //mod*10 dorkar nai because 10 100 or 1000 ans so on has mod 1
        //so no need to (mod*10 + t)
        if(t==2) two++;
        if(t==3) three++;
    }

    for(int i=0;i<=two ;i++){
        for(int j=0;j<=three;j++){
            if((modsum+(i*2)%9+(j*6)%9)%9==0){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--) solve();  
     
    return 0;

}