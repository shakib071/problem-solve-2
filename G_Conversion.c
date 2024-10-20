#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i;
    char s[100001];
    gets(s);
    
  int ln=strlen(s);
  for(i=0;i<ln;i++){
   if(s[i]==','){
    s[i]=' ';
   }
   else if(s[i]>='a' && s[i]<='z'){
    s[i]=toupper(s[i]);
   }
   else{
    s[i]=tolower(s[i]);
   }
  }
   printf("%s",s);
   
     
    return 0;
}