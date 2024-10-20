

#include<stdio.h>
int main(){
    
   int n,t,i,x,c;
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    c=1;
    scanf("%d",&n);
   int a[n];
   for(int j=0;j<n;j++){
      scanf("%d",&a[j]);
   }
   scanf("%d",&x);
   for(int j=0;j<n;j++){
    if(a[j]==x){
        c=0;
       break;
    }
   }
   if(c==0){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }

   }
   
     
    return 0;
}