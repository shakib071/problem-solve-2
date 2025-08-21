//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
    int ts;
    cin>>ts;

    while(ts--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        if(x==1 or x==n){
            cout<<1<<endl;
        }
        else{
            x--;
            int inf = 1e9;
            int leftwall=-inf, rightwall=inf;

            for(int i=x-1; i>=0; i--){
                if(s[i]=='#') {
                    leftwall=i;
                    break;
                }
            }
                
            for(int i=x+1; i<n; i++){
                if(s[i]=='#') {
                    rightwall=i;
                    break;
                }
            }

            if(leftwall == -inf && rightwall== inf ){
                cout<<1<<endl;
            }

            else{
                cout<<max(min(x+1, n-rightwall+1),min(leftwall+2,n-x))<<endl;
            }
                
            
        }
    }
     
    return 0;

}
