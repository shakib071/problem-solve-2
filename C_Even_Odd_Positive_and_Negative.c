#include<stdio.h>
int main(){
    
    int N,even=0,odd=0,pos=0,neg=0,i,x;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d",&x);
        if(x%2==0){
           even++; 
        }
        else{
            odd++;
        }
        if(x>0){
            pos++;
        }
        else if(x<0){
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
   
    return 0;
}