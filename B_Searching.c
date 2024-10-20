#include<stdio.h>
int main(){
   int n,i,j,x,c=0,p;
   scanf("%d",&n);
    
   int data[n];


   for(i=0;i<n;i++){
      scanf("%d",&data[i]);
   }


   scanf("%d",&x);

   for(j=0;j<n;j++){
      if(data[j]==x){
         p=j;
        c++;
        break;
      }
   }
   if(c>0){
      printf("%d",p);
   }
   else{
      printf("-1");
   }

    return 0;
}