#include<stdio.h>
int main(){
    
   int m,n,min,max,sum,q;

   do {
         sum=0;
   scanf("%d %d",&n,&m);
      q=m*n;
      if(q<=0){
        break;
      }
       if(m>=n){
        min=n;
        max=m;
       }
       else{
        max=n;
        min=m;
       }
       for(int i=min;i<=max;i++){
        sum=sum+i;
        printf("%d ",i);

       }
       printf("sum =%d\n",sum);
   }while(q>0);
    return 0;
}