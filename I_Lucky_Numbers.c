#include<stdio.h>
int main(){
    
   int n,p,i,q=0;
   scanf("%d",&n);
 
 p=n%10;
 q=(n/10)%10;
 if(p%q==0 || q%p==0){
    printf("YES");
 }
 else{
    printf("NO");
 }
 return 0;
}