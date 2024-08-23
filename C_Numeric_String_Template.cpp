#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){


        int n; cin>>n;
        vector<int>v;

        for(int i=0,x;i<n;i++){
            cin>>x;
            v.push_back(x);
            
        }
      


        int m;cin>>m;
        for(int j=0;j<m;j++){
            string s;
            cin>>s;
          
            map<int,char>m1;
            map<char,int>m2;
             bool ans=true;
            if(n==s.size()){
               
                for(int i=0;i<s.size();i++){
                    int x = v[i];
                    char c = s[i];

                    if(!m1.count(x)) m1[x]= c;
                    if(!m2.count(c)) m2[c]=x;

                    if(m1[x] != c || m2[c]!=x ){
                        ans=false;
                        break;
                    }
                }
                
            }

            else {
                ans = false;
            }

            if(ans) cout<<"YES\n";
            else cout<<"NO\n";

        }
    


}

int main(){
     
    ios::sync_with_stdio(0);cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        // int n; cin>>n;
        // vector<int>v;

       

        // for(int i=0,x;i<n;i++){
        //     cin>>x;
        //     v.push_back(x);
            
        // }
      


        // int m;cin>>m;
        // for(int i=0;i<m;i++){
        //     string s;
        //     cin>>s;
          
        //     if(solve(v,s,n)) cout<<"YES"<<endl;
        //     else cout<<"NO"<<endl;
        // }

        solve();
    }
     
     
    return 0;

}