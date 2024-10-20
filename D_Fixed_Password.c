#include<stdio.h>
int main(){
    
   int x=0,i;
   while(x != 1999){
    scanf("%d",&x);
     if(x!=1999){
        printf("Wrong\n");
     }
     else{
        printf("Correct\n");
         break;
     }
   }
    return 0;
}