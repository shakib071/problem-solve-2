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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        // cout<<n<<k<<s<<endl;
        
        int l=0,count=0;
        while(l<n){
            if(s[l]=='W') l++;
            else{
                l+=k;
                count++;
            }
        }
        cout<<count<<endl;
    }
     
     
    return 0;

}