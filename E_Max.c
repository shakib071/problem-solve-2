#include<stdio.h>
int main(){
    
   int N,i,max=0,x;
   scanf("%d",&N);

   for(i=1;i<=N;i++){
    scanf("%d",&x);
    if(x>max){
        max=x;
    }
   }
   printf("%d",max);

    return 0;
}