#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int c[26];
 char  arr[1000001],i;
   scanf("%s",&arr);

int ln=strlen(arr);
int k=0;
   for(int n=0;n<26;n++){
    c[n]=0;
   }
     
     for(i='a';i<='z';i++){
        for(int j=0;j<ln;j++){
            if(arr[j]==i){
              c[k]=c[k]+1;
            }
           
        }
        k++;
     }
     char p='a';
     
     for(int m=0;m<26;m++){
        if(c[m]!=0){
         printf("%c : %d\n",p,c[m]);
        }
        p++;
        
     }
     
     
    return 0;
}