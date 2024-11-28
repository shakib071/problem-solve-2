//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
    // vector<pair<int,int>>v;
    int left=0,right=0;
   for(int i=0,x,y;i<n;i++){
    cin>>x>>y;
    if(x>0) right++;
    if(x<0) left++;
    // v.push_back({x,y});
   } 

   if((left == 1 or right==1) or (left==0 or right==0)) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;


     
    return 0;

}