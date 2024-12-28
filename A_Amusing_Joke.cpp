//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s1,s2,s3;
   cin>>s1;
   cin>>s2;
   cin>>s3;
//    cout<<s1<<endl<<s2<<endl<<s3;
    if(s1.size()+ s2.size() != s3.size()) {
        cout<<"NO"<<endl;
        return 0;
    }
    map<char,int>mp;
    for(int i=0;i<s1.size();i++) mp[s1[i]]++;
    for(int i=0;i<s2.size();i++) mp[s2[i]]++;


    bool ans= true;

    for(int i=0;i<s3.size();i++){
        if(mp[s3[i]]>0){
            mp[s3[i]]--;
        }
        else {
            // ans=false;
            // break;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    // if(ans==false) cout<<"NO"<<endl;
    // else{
    //     for(int i=0;i<s2.size();i++){
    //     if(mp[s2[i]]>0){
    //         mp[s2[i]]--;
    //     }
    //     else {
    //         ans=false;
    //         break;
    //     }
    //     }
    //     if(ans) cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
    // }
     
    return 0;

}