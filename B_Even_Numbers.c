#include<stdio.h>
int main(){
    
   int N,i;
   scanf("%d",&N);
   if(N==1){
    printf("%d",-1);
   }

   else{

   for(i=1;i<=N;i=i+1){
    if(i%2==0){
      printf("%d\n",i);
    
   }
   }
   }
    return 0;
}