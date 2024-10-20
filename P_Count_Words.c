#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0;
    char s[1000001];
    gets(s);
    // printf("%s",s);
    int ln=strlen(s);

    for(i=0;i<ln;i++){
        if(s[i]==' '){
            if((s[i+1]>='a'&& s[i+1]<='z')||(s[i+1]>='A'&& s[i+1]<='Z')){
               count++;
        }
            }
            
    }
    printf("%d",count+1);
   
     
    return 0;
}