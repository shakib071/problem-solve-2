#include<stdio.h>
int main(){
    
   int i,n,sum=0;
   scanf("%d",&n);
   int p=n;
   while(n>0){
    sum=(sum*10)+(n%10);
    n=n/10;
   }
   if(sum==p){
    printf("%d\nYES",sum);
   }
   else{
    printf("%d\nNO",sum);
   }

    return 0;
}