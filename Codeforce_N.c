#include<stdio.h>
#include <ctype.h>
int main(){
    
   char X,upper,lower;
   scanf("%c",&X);

   if(X>='a' && X<='z'){
    lower=toupper(X);
    printf("%c",lower);
   }
   else{
    upper=tolower(X);
    printf("%c",upper);
   }
    return 0;
}