#include<stdio.h>
int main(){
    
   long long int n,m,k,arr[3],count=0,min,i,mm;
   scanf("%lld %lld %lld",&n,&m,&k);

     if(n<=m && n<=k ){
    min=n;
   }
   else if(m<=n && m<=k){
    min=m;
   }
   else{
    min=k;
   }
   count=count+min;
   n=n-min;
   m=m-min;
   k=k-min;
   
   if(n>=2 && k>=1){
    if((n/2)>k){
        mm=k;
    }
    else{
        mm=n/2;
    }
    count=count+mm;
   }

  printf("%lld",count);

    return 0;
}