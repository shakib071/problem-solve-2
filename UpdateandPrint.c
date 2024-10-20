#include<stdio.h>
int main(){
    
   int n,x,v,i,j;
    scanf("%d",&n);

   int data[n];

   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }

   scanf("%d %d",&x,&v);
   
   data[x]=v;

   for(j=n-1;j>=0;j--){
    printf("%d ",data[j]);
   }
     
    return 0;
}