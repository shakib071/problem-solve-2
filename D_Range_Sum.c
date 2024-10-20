#include<stdio.h>
int main(){
    
   long long int n,l,r,sum,i,j,sum1,sum2;
   scanf("%lld",&n);
   for(i=1;i<=n;i++){
    sum=0;
    sum1=0;
    scanf("%lld %lld",&l,&r);
    sum1=(l*(l+1))/2;
    sum2=(r*(r+1))/2;
    if(r>=l){
      sum=sum2-sum1+l;
    }
    else{
        sum=sum1-sum2+r;
    }
    
   
    printf("%lld\n",sum);
   }
    return 0;
}