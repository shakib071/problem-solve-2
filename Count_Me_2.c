#include<stdio.h>
#include<strings.h>
int main(){
    
   char s[100001];

     gets(s);

   int ln=strlen(s);
   int count=0;

     for(int i=0;i<ln;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            count++;
        }
     }

     printf("%d",count);

    return 0;
}