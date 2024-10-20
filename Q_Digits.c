#include<stdio.h>
int main(){
    
   int N,T,mod;
   scanf("%d",&N);

   for(int i=1;i<=N;i++){
    scanf("%d",&T);
    // while(T>0){
    //     mod=T%10;
    //     printf("%d ",mod);
    //     T=T/10;
    // }
    // printf("\n");
    //Also works but online judge is stupid
    do {
        printf("%d ",T%10);
        T=T/10;
    }while(T!=0);
    printf("\n");
   }
    return 0;
}