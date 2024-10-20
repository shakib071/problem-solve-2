#include<stdio.h>
int main(){
    
   int n,i,prod,x,j;
   scanf("%d",&n);
   
   for(i=1;i<=n;i++){
    prod=1;
    int p=1;
    scanf("%d",&x);
    do{
        prod=prod*p;
       p++;
    }while(p<=x);
    printf("%d\n",prod);
   } 
    return 0;
}