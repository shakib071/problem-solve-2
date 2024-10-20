#include<stdio.h>
#include<strings.h>
int main(){
    int t,i,sm,cp,di;
    scanf("%d",&t);
    int ln[t];
    char s[t][10001];

    for(i=0;i<t;i++){
        scanf("%s",&s[i]);
        ln[i]=strlen(s[i]);
    }
   for(i=0;i<t;i++){
    sm=0;
    cp=0;
    di=0;
    for(int j=0;j<ln[i];j++){
      if(s[i][j]>='a' && s[i][j]<='z'){
        sm++;
      }
      else if(s[i][j]>='A' && s[i][j]<='Z'){
        cp++;
      }
      else{
        di++;
      }
    }
    printf("%d %d %d\n",cp,sm,di);
        
    }
   
     
    return 0;
}