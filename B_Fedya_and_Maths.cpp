#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int power(int a,int b){
    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   string s;
   cin>>s;
//    cout<<s<<endl;  

    if(s.size()==1){
        int temp = s[0]-'0';
        // cout<<temp<<endl;
        temp= temp%4;
        // cout<<temp<<endl;
        int ans = (1 + power(2,temp) + power(3,temp) + power(4,temp))%5;
        cout<<ans<<endl;
    }
    else{
        int len = s.size();
        int last =s[len-1] - '0';
        int _2ndlast = s[len-2] - '0';
        // cout<<last<<" "<<_2ndlast<<endl;
        if(_2ndlast%2==0){
            last=last%4;
            int ans = (1+power(2,last)+power(3,last)+power(4,last))%5;
            cout<<ans<<endl;
        }
        else{
            int num = (_2ndlast*10)+last;
            num=num%4;
            int ans = (1+power(2,num)+power(3,num)+power(4,num))%5;
            cout<<ans<<endl;
        }
    }
     
    return 0;

}