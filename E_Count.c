#include<stdio.h>
#include<strings.h>
int main(){
    
   char S[1000001];
   scanf("%s",S);
   int ln=strlen(S);
    int sum=0;
    for(int i=0;i<ln;i++){
       sum=sum+(S[i]-'0');
    }

    printf("%d",sum);


     
    return 0;
}