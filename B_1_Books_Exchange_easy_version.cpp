//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int>p;
    vector<int>table1,table2;
    vector<int> ans(n,n);

    for(int i=0;i<n;i++){
        int x;cin>>x;
        p.push_back(x);
    }
    table1=p;
    // sort(table1.begin(),table1.end());
    table2=table1;
    sort(table2.begin(),table2.end());
    bool t1=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(t1){
                 if(table1[j]==p[j]){
                    ans[j]=min(ans[j],i+1);
                }
                table2[p[j]] = table1[j];
               
            }
            else{
                 if(table2[j]==p[j]){
                    ans[j]=min(ans[j],i+1);
                }
                table1[p[j]] = table2[j];
               
            }
            t1= ~t1;
            
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;
     while(t--) solve();
     
    return 0;

}