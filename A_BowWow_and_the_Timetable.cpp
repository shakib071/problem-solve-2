#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s;
   cin>> s;
   
   int len= s.length();
   int count =0;
    if(len%2==0){
      cout<<len/2<<endl;
    }
    else{
        for(int i=1 ; i<len;i++){
            if(s[i]=='1'){
                count=1;
                break;
            }

        }
        if(count) cout<<(len/2)+1<<endl;
        else cout<<len/2<<endl;

    }

   

   
     
    return 0;

}