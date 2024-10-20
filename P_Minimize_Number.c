#include<stdio.h>
int main(){
    
   int n,i,c=0,cc=0,j;
   scanf("%d",&n);

   int data[n];
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   int low=data[0];
   for(i=0;i<n;i++){
    if(data[i]%2 != 0){
        c=0;
        break;
    }
    else{
        c++;
    }

   }

   if(c==0){
    printf("%d",c);
   }
   else{
    for(i=0;i<n;i++){
     if(low>data[i]){
        low=data[i];
     }
    }
    for(j=low;j>0;j=j/2){
        if(j%2==0){
            cc++;
        }
        else{
            break;
        }
    }
    printf("%d",cc);
   }
     
    return 0;
}