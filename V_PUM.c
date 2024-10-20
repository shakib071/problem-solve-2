#include<stdio.h>
int main(){
    
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=(4*n);i=i+4){
    for(j=i;j<=(i+3);j++){
        if(j%4==0){
            printf("PUM");
        }
        else{
        printf("%d ",j);
        }
    
    }
    printf("\n");
   }

    return 0;
}