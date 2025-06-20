//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin >> t;
   
   while(t--){
     vector<int> v;
     for(int i = 0, x; i < 3; i++){
         cin >> x;
         v.push_back(x);
     }

     int ans = INT_MAX;
     for(int i=0;i<3;i++){
        int tempans = 0;
        for(int j=0;j<3;j++){
            tempans += abs(v[i]-v[j]);
        }
        ans = min(ans, tempans);
     }
     cout<< ans << endl;
   }
     
    return 0;

}