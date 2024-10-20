#include<stdio.h>
int main(){
    
    int n,i,j,low,p;
   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   low=arr[0];

   for(j=0;j<n;j++){
    if(arr[j]<low){
        low=arr[j];
        p=j;
    }
   }
  
   printf("%d %d",low,p+1);
    return 0;
}