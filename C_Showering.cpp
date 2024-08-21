#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool solve(int t){
    int n,s,m;
    cin>>n>>s>>m;
    vector<pair<int,int>> v;
     
     for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        v.push_back(make_pair(a,b));

     }

     if(v[0].first >=s ) return true;
     else{

        for(int i=1;i<n;i++){
            if((v[i].first - v[i-1].second)>=s)return true;
        }

        if((m-v[n-1].second)>=s)return true;
        else return false;
     }


    // int a,b,temp;
    // cin>>a>>b;
    // cout<<a<<" "<<b<<endl;

    // if(a>=s) return true;
    // else{

    //     for(int i=1;i<n;i++){
    //         int temp = b;
    //         cin>>a>>b;
    //         cout<<temp<<" "<<a<<" "<<b<<endl;
    //         if((a - temp) >= s){
    //             return true;
    //         }

    //     }

    //     if((m-b)>=s) return true;
    //     else return false;
        
    // }

    // vector<pair<int,int>>v;
    // for(int i=0;i<n;i++){
    //     if(!first){
    //         temp=b;
    //         cout<<temp<<endl;
    //     } 
    //     cin>>a>>b;
    //     cout<<a<< " "<<b<<endl;
        
    //     if(first and a>=s) {
    //         first = false;
    //         return true;
    //     }
    //     else if(!first) {
            
    //         if((temp-a)>=s) return true ;
    //     }

    // }
    
    // if(m-b>=s) return true;
    // else return false;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int t;
   cin>>t;

   while(t--){
    if(solve(t)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
   }  
     
    return 0;

}