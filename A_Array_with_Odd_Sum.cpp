//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int odd=0,even=0;
        forn(n){
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(odd==0) cout<<"NO"<<endl;
        else if(odd%2==0 && even==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
     
    return 0;

}