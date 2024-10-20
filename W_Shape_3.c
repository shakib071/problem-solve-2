#include<stdio.h>
int main(){
    
   int n,i,j,s;
   scanf("%d",&n);

   for(i=1;i<=n;i++){
    s=2*i-1;
    for(int k=(n-i);k>0;k--){
        printf(" ");
    }
    for(j=1;j<=s;j++){
        printf("*");
    }
    printf("\n");
   }


   for(i=n;i>0;i--) {
    s=2*i-1;
     for(int k=i;k<=(n-1);k++){
        printf(" ");
     }
    for(j=1;j<=s;j++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}