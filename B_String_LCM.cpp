//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}


int lcmm(int n1,int n2){
    return (n1*n2)/gcd(n1,n2);
}

string solve(string s1,string s2){
    int n1 = s1.size();
    int n2 = s2.size();

    int lcm = lcmm(n1,n2);
    string ss1= s1;
    string ss2= s2;

   while(s1.size() != lcm){
    s1=s1+ss1;
   } 
   while(s2.size() != lcm){
    s2=s2+ss2;
   }
//    cout<<s1<<" "<<s2<<endl;
   if(s1==s2) return s1;
   return "-1";
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<solve(s1,s2)<<endl;
   }  
     
    return 0;

}