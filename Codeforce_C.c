#include<stdio.h>
int main(){
    
   long long int X,Y,sum,mul,sub;
   scanf("%lld %lld",&X,&Y);

   sum=X+Y;
   mul=X*Y;
   sub=X-Y;
   printf("%lld + %lld = %lld\n",X,Y,sum);
   printf("%lld * %lld = %lld\n",X,Y,mul);
   printf("%lld - %lld = %lld",X,Y,sub);
    return 0;
}