//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
//    cout<<sqrt(0);  

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt0=0;

        forn(n){
            if(s[i]=='1')cnt1++;
            else cnt0++;
        }

        // cout<<cnt0<<" "<<cnt1<<endl;

        int temp = sqrt(cnt0);
        if((temp * temp == cnt0) and (temp+1)*4==cnt1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
     
    return 0;

}