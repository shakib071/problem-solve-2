// #include<bits/stdc++.h>
// // #include<bits/stdc++.h>
// #define ll long long int
// #define forn(n) for(int i=0;i<n;i++)
// using namespace std;

// ll digits(ll n){
//     // int count=0;

//     // while(n){
//     //     count++;
//     //     n=n/10;
//     // }
//     // return count;

//     if(n<10) return 1;
//     else if(n<100) return 2;
//     else if(n<1000) return 3;
//     else if(n<10000) return 4;
//     else if(n<100000) return 5;
//     else if(n<1000000) return 6;
//     else if(n<10000000) return 7;
//     else if(n<100000000) return 8;
//     else if(n<1000000000) return 9;
//     else if(n<10000000000) return 10;


// }


// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//      ll n;cin>>n;
//     int digitcount=0,p=10;
//     //  for(int i=1;i<=n*p;i++){
//     //     digitcount+=digits(i);
//     //  }
    
//     // while()
    
    
    

//      cout<<digitcount<<endl;
     
//     return 0;

// }

//TLE

//NEW

//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     ll n;
     cin>>n;
     

     if(n<10){
        cout<<n<<endl;
     }
     else{
        ll temp = 9,ans=9,mul=2, temp2=9;
        bool cycle = true;
        while(cycle){
          temp=(temp*10)+9;
         
          if(temp>n){
           
            temp2=n-(temp/10);
    
            cycle=false;
          }
          else{
           
            temp2=temp2*10;
            
          }
          ans=ans+temp2*mul;
          mul=mul+1;
        }
        cout<<ans<<endl;




     }
     
    return 0;

}