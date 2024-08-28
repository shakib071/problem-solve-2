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
    
    for(int i=0;i<2*n;i++) {
        int x; cin>>x;
        v.push_back(x);

      }
    int ans = 99999999;
    for(int i=0;i<2*n-1;i++){
        for(int j=i+1;j<2*n;j++){

            vector<int>v2;

            for(int k=0;k<2*n;k++){

                if(k!=i and k!=j){
                    v2.push_back(v[k]);
                }
            }

            sort(v2.begin(),v2.end());
            int sum=0;
            for(int l=1;l<v2.size();l=l+2){
                sum+= v2[l]-v2[l-1];
            }

        ans = min(sum,ans);

        }
    }
    cout<<ans<<endl;
     
    return 0;

}