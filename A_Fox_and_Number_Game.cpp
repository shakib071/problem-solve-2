//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int n;
   cin>>n;
    vector<int>v;
   for(int i=0,x;i<n;i++){
    cin>>x;
    v.push_back(x);
   }  
    //after xi=xi-xj all element will equal to gcd of all ellememt 
    //so after finding gcd of all element we can multiply with n
    //which is equvalient to adding all minimun sum
   int gcdd=__gcd(v[0],v[1]);

   for(int i=2;i<n;i++){
    gcdd=__gcd(gcdd,v[i]);
   }
//    cout<<gcdd<<endl;
  cout<<gcdd*n<<endl;
     
    return 0;

}