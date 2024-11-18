//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;cin>>s;
    // cout<<s<<endl;
    vector<int>freq1(n+1,0);
    vector<int>freq2(n+1,0);
    // freq1.push_back(1);
    // freq2.push_back(1);
    freq1[0]=1;
    freq2[0]=1;
   
    //1st to last and last to frist frequency count
    map<char,int>mp1;
    map<char,int>mp2;
     mp1[s[0]]++;
    mp2[s[n-1]]++;
    for(int i=1;i<n;i++){
        if(mp1[s[i]]==0){
           
           freq1[i]=freq1[i-1]+1;
            mp1[s[i]]++;
        }
        else{
            freq1[i]=freq1[i-1];
           
        }
        if(mp2[s[n-1-i]]==0){
           
            freq2[i]=freq2[i-1]+1;
            mp2[s[n-1-i]]++;
        }
        else{
            freq2[i]=freq2[i-1];
            
        }

      
    }
    //   forn(n){
    //         cout<<freq1[i]<<" ";
    //     }
    //     cout<<endl;
    int ans=2;

    forn(n-1){
        ans=max((freq1[i]+freq2[n-2-i]),ans);
        // cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    
    int t;
    cin>>t;

    while(t--) solve();
     
    return 0;

}