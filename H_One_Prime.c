#include<stdio.h>
int main(){
    
   int n,i,p;
   scanf("%d",&n);

if(n>1){

   for(i=2;i<=n/2;i++){
    if(n%i==0){
        p=0;
        break;
    }
    else{
        p=1;
    }
   }
   if(p==1){
    printf("YES");
   }
   else{
    printf("NO");
   }
}
else{
    printf("NO");
}
    return 0;
}