#include<stdio.h>
#include<string.h>
int main(){
    
   int n,i,p,q,r;
   scanf("%d",&n);
   int ln[n];
   char s[n][101];

   for(i=0;i<n;i++){
    scanf("%s",s[i]);
   }
    for(i=0;i<n;i++){
    ln[i]=strlen(s[i]);
   }
    for(i=0;i<n;i++){
    if(ln[i]<=10){
        printf("%s\n",s[i]);
    }
    else{
       p=s[i][0];
       r=ln[i]-1;
       q=s[i][r];
   
       printf("%c%d%c\n",p,ln[i]-2,q);
    }
   }


   
     
    return 0;
}