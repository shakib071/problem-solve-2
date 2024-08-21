#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s = "hello";  
    bool o = false;
    int i=0;
    string in ;
    cin>>in;
    for(int j=0;j<in.length();j++){
        if(s[i]==in[j]){
            i++;
            if(in[j]=='o'){
                o = true;
                break;
            }
        }
    }

    if(o) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}