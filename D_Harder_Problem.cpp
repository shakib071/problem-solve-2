//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    map<int,int>next;
    int x;
    cin>>x;
    a.push_back(x);
    int prev=x;
    // int last;
    
    for(int i=1;i<n;i++){
        cin>>x;
         a.push_back(x);
        if(x!=prev){
            next[prev]=x;//prev er por x acea
            // cout<<prev<<" "<<next[prev]<<" ";

            prev = x;
            

        }
       
        // if(i==n-1) last=x;
    }
    cout<<next[prev]<<endl;

    
  
   
    // vector<int> b;
    // b.push_back(a[0]);
    // map<int,int> mp;
    // int mx=1;
    // mp[a[0]]++;
    // for(int i=1;i<n;i++){
    //     if(mp[a[i]]<mx){
    //         b.push_back(a[i]);
    //         mp[a[i]]++;
    //         mx=max(mx,mp[a[i]]);
    //         // cout<<i<<" "<<a[i]<<endl;
    //     }
    //     else{
           
    //         int temp1 = a[i];
    //         bool paici = false;
    //         int teminx = i;
    //         while(paici==false){
    //             // temp1 = next[temp1];
    //             if(mp[next[temp1]] < mx){
    //                 temp1=next[temp1];
    //                 // cout<<temp1<<'t'<<endl;
    //                 // teminx = nextidx[teminx];
    //                 paici = true;
                    
    //             }
    //             else {
    //                 temp1 = next[a[i]];
    //             }
    //             teminx++;
    //             if(teminx==n-1) break;

    //         }
    //         // b.push_back(temp)
    //         if(paici== true){
    //             b.push_back(temp1);
    //             mp[temp1]++;
    //              mx=max(mx,mp[temp1]);
    //             //  cout<<i<<" h "<<temp1<<endl;
    //         }
    //         else {
    //             b.push_back(a[i]);
    //             mp[a[i]]++;
    //             mx=max(mx,mp[a[i]]);
    //             // cout<<i<<" n "<<a[i]<<endl;
    //         }
    //     }
    // }
    // for(int i=0;i<b.size();i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    solve();
   }  
     
    return 0;

}