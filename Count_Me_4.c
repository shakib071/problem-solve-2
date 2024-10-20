#include<stdio.h>
#include<string.h>
int main(){
    
   char s[10001];
   int count[26]={0};
   scanf("%s",s);
int ln=strlen(s);
 
 for(int i=0;i<ln;i++){
    int v=s[i]-'a';
    count[v]++;
 }

 for(int j=0;j<26;j++){
    int  p=j+'a';
    if(count[j]!=0){
      printf("%c - %d\n",p,count[j]);
    }
   
 }
     
    return 0;
}