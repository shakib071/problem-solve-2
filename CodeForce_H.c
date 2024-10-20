#include<stdio.h>
#include<math.h>
int main(){
    
   double S;
   int A,B,c,f,r;
   scanf("%d %d",&A,&B);
    // S=A/B;
   c=ceil(A/B);
   f=floor(A/B);
   r=round(A/B);
   printf("floor %d / %d = %d\n",A,B,f);
   printf("ceil %d / %d = %d\n",A,B,c);
   printf("round %d / %d = %d\n",A,B,r);
    return 0;
}