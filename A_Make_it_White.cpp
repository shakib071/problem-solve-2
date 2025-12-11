//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    string s;cin>>s;
    int left = 0,right = n-1;
    while(s[left]=='W' and left<n)left++;
    while(s[right]=='W' and right>=0)right--;
    cout<<right-left+1<<endl;

   }  
     
    return 0;

}