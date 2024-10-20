#include<stdio.h>
int main(){
    
   int a,b,c,flag,count=0;
   scanf("%d %d",&a,&b);
  for(int i=a;i<=b;i++){
    flag=0;
    c=i;
    while(c>0){
        if(c%10!=4 && c%10 !=7){
            flag++;
            break;
        }

        c=c/10;
    }
    if(flag==0){
   printf("%d ",i);
   count++;
   }

  }
  if(count==0){
    printf("%d",-1);
  }

    return 0;
}