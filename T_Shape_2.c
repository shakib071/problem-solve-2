#include<stdio.h>
int main(){
    
   int n,i,s;
    scanf("%d",&n);
   for(i=1;i<=n;i++){
     s=(2*i-1);
      for(int k=(n-i);k>0;k--){
         printf(" ");
        }
    for(int j=1;j<=s;j++){
       
     printf("*");
    }
   printf("\n");
   }
    return 0;
}