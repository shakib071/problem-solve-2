#include<stdio.h>
#include<string.h>
int main(){
    
    int n,j;
    scanf("%d",&n);
    int lns[n],lnt[n];

    char s[n][51],t[n][51];

    for(int i=0;i<n;i++){
        scanf("%s %s",s[i],t[i]);
    }
    for(int i=0;i<n;i++){
        lns[i]=strlen(s[i]);
        lnt[i]=strlen(t[i]);
    }

    for(int i=0;i<n;i++){
        if(lns[i]==lnt[i]){
            for(j=0;j<lns[i];j++){
               printf("%c%c",s[i][j],t[i][j]);
            }
            printf("\n");
            
        }
        else if(lns[i]<lnt[i]){
            for(j=0;j<lns[i];j++){
               printf("%c%c",s[i][j],t[i][j]);
            } 
            for(int k=lns[i];k<lnt[i];k++){
                printf("%c",t[i][k]);
            }
            printf("\n");
        }
        else{
           for(j=0;j<lnt[i];j++){
               printf("%c%c",s[i][j],t[i][j]);
            } 
            for(int k=lnt[i];k<lns[i];k++){
                printf("%c",s[i][k]);
            }
            printf("\n"); 
        }
    } 
   

     
    return 0;
}