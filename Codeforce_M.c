#include<stdio.h>
int main(){
    
   char X;
   scanf("%c",&X);

    if(X>='a' && X<='z'){
        printf("ALPHA\nIS SMALL");
    }
    else if(X>='A' && X<='Z'){
        printf("ALPHA\nIS CAPITAL");
    }
    else{
        printf("IS DIGIT");
    }
    return 0;
}