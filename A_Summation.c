#include<stdio.h>
int main(){
    long long int p,i,sum1;
    scanf("%lld",&p);
    
   long long int n[p],sum=0;
   for(i=0;i<p;i++){
    scanf("%lld",&n[i]);
   }
    for(i=0;i<p;i++){
        sum=sum + n[i];
    }
    if(sum<0){
        sum=sum*-1;
    }
    printf("%lld",sum);
    return 0;
}