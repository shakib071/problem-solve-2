#include<stdio.h>
int main(){
    
   int n,i,x,j,p;
   scanf("%d",&n);
 long long int N[20];
  N[0]=1;
   for(i=1;i<=20;i++){
    N[i]= i*N[i-1];
    
   }
   for(j=0;j<n;j++){
    scanf("%d",&x);
     printf("%lld\n",N[x]);
   }
    return 0;
}