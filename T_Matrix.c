#include<stdio.h>
int main(){
    
   int n,i,j,diag1=0,diag2=0;
   scanf("%d",&n);

   int A[n][n];

   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
   }
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       if(i==j){
        diag1=diag1+A[i][j];
       }
    }
   }
  int p=n-1;
  for(i=0;i<n;i++){
    diag2=diag2+A[i][p];
    p--;
    if(p<0){
        break;
    }
  }
  int dif=diag1-diag2;
  if(dif<0){
    dif=dif *-1;
  }
  printf("%d",dif);

     
    return 0;
}