#include<stdio.h>
int main(){
    
   int n,i,j;
   scanf("%d",&n);

   int arr[n];

   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
    
    for(j=0;j<n;j++){
        if(arr[j]<=10){
            printf("A[%d] = %d\n",j,arr[j]);
        }
    }
    return 0;
}