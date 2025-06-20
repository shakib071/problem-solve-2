//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   
    int n;
    cin >> n;
   

    while(n--){
        int m;
        cin>>m;
        int ans = 0 , count = 0;
        
        for(int i=0,x;i<m;i++){
            cin>>x;
            if(x==1) count=0;
            else count++;
            ans = max(ans,count);
        }
        cout<< ans<<endl;
    }
     
    return 0;

}