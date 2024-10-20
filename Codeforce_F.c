#include<stdio.h>
int main(){
    
   long long int M,N;
   int i,j,sum;
   scanf("%lld %lld",&M,&N);
   i=M%10;
   j=N%10;
   sum= i+j;
   printf("%d",sum);
    return 0;
}