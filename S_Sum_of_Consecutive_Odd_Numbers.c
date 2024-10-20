#include<stdio.h>
int main(){
    
    int x,y,i,n,max,min,sum,j,count=0;
    scanf("%d",&n);
    do {
        sum=0;
      scanf("%d %d",&x,&y);
      count++;
      if(x>=y){
         max=x-1;
      min=y+1;
      }
     
      else {
        max=y-1;
        min=x+1;
      }

      for(j=min;j<=max;j++){
        if(j%2==0){
            continue;
        }
        else{
            sum=sum+j;
        }
      }
      printf("%d\n",sum);
    }while(count<n);

   
    return 0;
}