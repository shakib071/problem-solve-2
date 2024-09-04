//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void add_divs(int x,map<int,int>&divs){
    int i=2;
    while(i*i<=x){
        while(x%i==0){
            divs[i]++;
            // cout<<i<<" ";
            x=x/i;
        }
        i++;
    }

    if(x>1) divs[x]++;
    
}


bool solve(){
    int n;
    cin>>n;

    vector<int>v;

    map<int,int>divs;

    for(int i=0,x;i<n;i++){
        cin>>x;
        v.push_back(x);
        add_divs(v[i],divs);
    }

    for(auto val : divs){
        if(val.second % n != 0) return false;
    }
    return true;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    cout<<(solve() ? "YES" : "NO")<<endl;

   }  
     
    return 0;

}