#include<stdio.h>
int main(){
    
   int n,a,b,c,sum,sum1=0;
   scanf("%d %d %d",&n,&a,&b);

   for(int i=1;i<=n;i++){
     c=i;
     sum=0;
     while(c>0){
        sum=sum+(c%10);
        c=c/10;
     }
     if(sum<=b && sum>=a){
        sum1=sum1+i;

     }
     
   }
   printf("%d",sum1);
    return 0;
}