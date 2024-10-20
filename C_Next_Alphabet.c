#include<stdio.h>
int main(){
    
   char p;
   int q;
   scanf("%c",&p);
   if(p>='a' && p<'z'){
   q= p +1;
   printf("%c",q);
   }
   if(p=='z'){
    printf("%c",'a');
   }
    
    return 0;
}