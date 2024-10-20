#include<stdio.h>
int main(){
    
   int i,j,k,l,n;
   scanf("%d",&n);
   l=(n/2)+1;
   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(l==i && l==j){
            printf("X");
        }
       else if(i==j){
            printf("\\");
        }

       else if((i+j)==(n+1)){
            printf("/");
        }
        
        else{
            printf("*");
        }
      
    }
   
      printf("\n");
   }
    return 0;
}