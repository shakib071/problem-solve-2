#include<stdio.h>
int main(){
    
   int n,i,count2=0,count3=0;
   scanf("%d",&n);
   int a[n];

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
    if(a[i]%2==0 && a[i]%3==0){
        count2++;
    }
    else if(a[i]%2==0){
        count2++;
    }
    else if(a[i]%3==0){
        count3++;
    }
   }
   printf("%d %d",count2,count3);
     
    return 0;
}