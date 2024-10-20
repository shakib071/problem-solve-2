#include<stdio.h>
int main(){
    
   int n,i,j,temp;
   scanf("%d",&n);

   int data[n];
   
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }

   for(i=0;i<n;i++){
    for(j=i;j<n;j++){
     if(data[i]>=data[j]){
        temp=data[i];
        data[i]=data[j];
        data[j]=temp;
     }
    }
   }

   for(i=0;i<n;i++){
    printf("%d ",data[i]);
   }

     
    return 0;
}