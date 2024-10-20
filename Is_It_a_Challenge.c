#include<stdio.h>
int main(){
    
   int n,i,j;
   scanf("%d",&n);

   if(n>0){
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
   }
   else {
    for(j=n;j<=0;j++){
        printf("%d ",j);
    }
   }
     
    return 0;
}