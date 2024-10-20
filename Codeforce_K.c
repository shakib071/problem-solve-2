
#include<stdio.h>
int main(){
    
   int A,B,C;
   scanf("%d %d %d",&A,&B,&C);
   if(A>=B && A>=C){
    
    if(B>C){
        printf("%d ",C,A);
    }
    else{
        printf("%d ",B);
    }
    printf("%d",A);
   }
   else if (B>=A && B>=C){
   
    if(C>A){
        printf("%d ",A);
    }
    else{
       printf("%d ",C); 
    }
     printf("%d",B);
   }
   else{
   
    if(A>B){
        printf("%d ",B);
    }
    else{
        printf("%d ",A);
    }
     printf("%d",C);
   }
    return 0;
}
