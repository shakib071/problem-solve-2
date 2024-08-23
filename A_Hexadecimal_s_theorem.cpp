#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n;
     cin>>n;

    

     if(n==0){
        cout<<0<<" "<<0<<" "<<0<<endl;
     }
     else if(n==1){
        cout<<0<<" "<<0<<" "<<1<<endl;
     }
     else{
         vector<int> v;
        v.push_back(0);
        v.push_back(1);

        int nn=1,i=2;


        while(true){
            nn=v[i-1]+v[i-2];
            if(nn<=n) v.push_back((v[i-1]+v[i-2]));
            else break;
            i++;
        }

        cout<<0<<" "<<v[v.size()-3]<<" "<<v[v.size()-2];

     }
     
    return 0;

}