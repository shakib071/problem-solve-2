#include<stdio.h>
int main(){
    
   int n,i,sump=0,sumn=0;
   scanf("%d",&n);

   int data[n];

   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }

   for(i=0;i<n;i++){
    if(data[i]>0){
        sump=sump+data[i];
    }
    else{
        sumn=sumn+data[i];
    }

   }

   printf("%d %d",sump,sumn);
     
    return 0;
}