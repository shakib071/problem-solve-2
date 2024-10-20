#include<stdio.h>
int main(){
    
   int n,i,j;
   scanf("%d",&n);

   for(i=2;i<=n;i++){
    int flag=0;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("%d ",i);
    }
   }
    return 0;
}