#include<stdio.h>
int main(){
    
  long long int n,i;
   scanf("%lld",&n);

   long long int data[n+1];
   data[1]=0;
   data[2]=1;
  if(n>2){

   for(i=3;i<=n;i++){
    data[i]=data[i-1]+data[i-2];
   }
  }
   printf("%lld",data[n]);
     
    return 0;
}