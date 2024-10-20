#include<stdio.h>
#include<math.h>
int main(){
    
   int n,i,x,p,count,des;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
    count=0;
    des=0;
    scanf("%d",&x);
    p=x;
    while(p>0){
        if(p%2==1){
            count++;
        }
        p=p/2;
    }
    for(int k=0;k<count;k++){
        des=des+pow(2,k);
    }
    printf("%d\n",des);
   }

     
    return 0;
}