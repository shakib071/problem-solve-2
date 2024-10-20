#include<stdio.h>
int main(){
    
   int i,n;
   scanf("%d",&n);
   for(i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}