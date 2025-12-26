//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

vector<int>v(1003,-1);

void solve(){
  int i=1,val=1;
  while(i<=1000){
    if(val%3!=0 and val%10 != 3){
      v[i]=val;
      i++;
    }
    val++;
  }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   solve();
   while(t--){
    int x;
    cin>>x;
    cout<<v[x]<<endl;
   }  

     
    return 0;

}