#include<stdio.h>
int main(){
    
   int n,i,j,p,c=0;
   scanf("%d",&n);

   int data[n];
   
   for(i=0;i<n;i++){
    scanf("%d",&data[i]);
   }
    p=n-1;
  
   if(n%2==1){
    
    for(i=0;i<n/2;i++){
        if(data[i]!=data[p]){
            c++;
             break;
        }
        p--;
        if(p<=n/2){
            break;
        }
       
    }
   }
   

   else{
    for(i=0;i<n/2;i++){
      if(data[i]!=data[p]) {
            c++;
            break;
    }
     p--; 
    if(p<n/2){
            break;
    }

   }
   
   }
    if(c!=0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}