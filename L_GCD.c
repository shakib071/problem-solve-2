#include<stdio.h>
int main(){
    
   int a,b,i,min,GCD;
   scanf("%d %d",&a,&b);

   if(a>=b){
    min=b;
   }
   else{
    min=a;
   }
   for(i=1;i<=min;i++){
    if(a%i==0 && b%i==0){
        GCD=i;
    }

   }

   printf("%d",GCD);

    return 0;
}