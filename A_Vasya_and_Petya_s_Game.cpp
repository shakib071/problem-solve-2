#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
#define N 1e3+6
using namespace std;
int prime[1000000]={0};
void primeSeive(int n){
    

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
   

}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    primeSeive(n);
    vector<int>ans;
    // cout<<prime[10]<<endl;
     for(int i=2;i<=n;i++){
        if(prime[i]==0){
            ans.push_back(i);
            int temp =i*i;
            while(temp<=n){
               
                    // cout<<temp<<endl;
                   
                   ans.push_back(temp);
                    temp = temp*i;
             

            }
            
        }
     }

     cout<<ans.size()<<endl;

     for(int a : ans){
        cout<<a<<" ";
     }
     
    return 0;

}