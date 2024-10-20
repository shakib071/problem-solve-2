#include<stdio.h>
int main(){
    
   int X,i,j;

   scanf("%d",&X);
   
   for(i=X;i>0;i=i/10){
     j=i%10;
   }
   if(j%2==0){
    printf("EVEN");
   }
   else{
    printf("ODD");
   }

    return 0;
}