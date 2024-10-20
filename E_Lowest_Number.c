#include<stdio.h>
int main(){
    
   int n,i,j,s=0;
   // jodi ekbaro 2nd loop if na chole jate    
//    jate s+1=1 hoy tai s=0,ekbaroo na cholle
// jate garbage value na dekhay

   scanf("%d",&n);

   int data[n];

   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
  int low=data[0];
//    for(i=0;i<n;i++){
//     printf("%d",data[i]);
//    }

for(i=1;i<n;i++){
    if(low>data[i]){
        low=data[i];
        s=i;
       
    }
}
printf("%d %d",low,s+1);
    return 0;
}