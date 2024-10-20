#include<stdio.h>
int main(){
   int n,i,j,temp,ln;
   scanf("%d",&n);
   char s[n+1];
     scanf("%s",s);

for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
        if(s[j]>s[j+1]){
           temp=s[j];
           s[j]=s[j+1];
           s[j+1]=temp; 
        }
    }
}
    
// for(i=0;i<n-1;i++){
//     for(j=i+1;j<n;j++){
//        if(s[i]>s[j]){
//         temp=s[i];
//         s[i]=s[j];
//         s[j]=temp;
//        } 
//     }
// }
printf("%s",s);
     
    return 0;
}