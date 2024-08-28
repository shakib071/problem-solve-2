//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

bool tr(int a ,int b,int c){
    return ((a+b>c) and (a+c>b) and (b+c>a) );
}

bool sg(int a,int b, int c){
    return ((a+b==c) or (a+c==b) or (b+c==a));
    
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   bool normal=false,seg=false;

   normal = normal || tr(a,b,c);
   normal = normal || tr(a,b,d);
   normal = normal || tr(a,c,d);
   normal = normal || tr(b,c,d);

   seg = seg || sg(a,b,c);
   seg = seg || sg(a,b,d);
   seg = seg || sg(a,c,d);
   seg = seg || sg(b,c,d);

   if(normal) cout<<"TRIANGLE"<<endl;
   else if(seg) cout<<"SEGMENT"<<endl;
   else cout<<"IMPOSSIBLE"<<endl;
     
    return 0;

}