#include<stdio.h>
int main(){
    
   int t,i,need;
   scanf("%d",&t);
   int m1[t],m2[t],d[t],extra[t];

   for(i=0;i<t;i++){
    scanf("%d %d %d",&m1[i],&m2[i],&d[i]);
   }
   for(i=0;i<t;i++){
      need=(d[i]*m1[i])/(m1[i]+m2[i]);
      extra[i]=d[i]-need;
   }
   for(i=0;i<t;i++){
    printf("%d\n",extra[i]);
   }

     
    return 0;
}