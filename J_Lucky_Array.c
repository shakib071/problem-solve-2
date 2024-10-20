#include<stdio.h>
int main(){
    
   int n,i,c=0;
   scanf("%d",&n);

   int data[n];
    for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
   int low=data[0];
   for(i=1;i<n;i++){
    if(data[i]<low){
        low=data[i];
    }
   }
//    printf("%d",low);
  for(i=0;i<n;i++){
    if(low==data[i]){
        c++;
    }
  }
  if(c%2==0){
    printf("Unlucky");
  }
  else{
    printf("Lucky");
  }
     
    return 0;
}