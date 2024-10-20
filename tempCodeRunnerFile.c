#include<stdio.h>
int main(){
    
   int N,i;
   long long sum=0;
   scanf("%d",&N);

   for(i=1;i<=N;i++){
    sum=sum+i;
   }
   printf("%lld",sum);
    return 0;
}