#include<stdio.h>
int main(){
    
   int n,i,h=0,l=0;
   scanf("%d",&n);

   int data[n];
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   int low=data[0];
   int high=data[0];

   for(i=0;i<n;i++){
    if(low>data[i]){
        low=data[i];
        l=i;
    }
    if(high<data[i]){
        high=data[i];
        h=i;
    }
   }
    int temp=data[l];
    data[l]=data[h];
    data[h]=temp;

    for(i=0;i<n;i++){
        printf("%d ",data[i]);
    }
     
    return 0;
}