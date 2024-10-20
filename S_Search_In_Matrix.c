#include<stdio.h>
int main(){
    
   int N,M,X,i,j,c=0;
   scanf("%d %d",&N,&M);

   int data[N][M];

   for(i=0;i<N;i++){
    for(j=0;j<M;j++){
        scanf("%d",&data[i][j]);
    }
   }

   scanf("%d",&X);
   
for(i=0;i<N;i++){
    for(j=0;j<M;j++){
    if(data[i][j]==X){
        c++;
        break;
    }
    }
   }

   if(c==0){
    printf("will take number");
   }
   else{
    printf("will not take number");
   }


     
    return 0;
}