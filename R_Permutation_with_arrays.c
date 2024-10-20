#include<stdio.h>
int main(){
    
   int n,i,j,c=0;
   scanf("%d",&n);

   int a[n],b[n];

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
    scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==0||b[j]==0){
            continue;
        }
     else if(a[i]==b[j]){
        a[i]=0;
        b[j]=0;
      }
    }
   }

   for(i=0;i<n;i++){
    if(a[i]!=0 || b[i]!=0){
        c++;
        break;
    }
   }
   if(c==0){
    printf("yes");
   }
   else{
    printf("no");
   }
     
    return 0;
}