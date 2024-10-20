#include<stdio.h>
int main(){
    
   int f[50],n;
   scanf("%d",&n);
   f[0]=0;
   f[1]=1;
   for(int i=2;i<n;i++){
    f[i]=f[i-1]+f[i-2];
   }

   for(int j=0;j<n;j++){
      printf("%d ",f[j]);
   }
    return 0;
}