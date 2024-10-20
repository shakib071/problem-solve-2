#include<stdio.h>
#include<string.h>
int main(){
    
     int a,b,i,c=0;
     scanf("%d %d",&a,&b);
     int n=a+b+1;
     char S[n];
     scanf("%s",S);
    int ln=strlen(S);
    

    if(S[a]=='-'){
      for(i=0;i<ln;i++){
        if(a==i){
            continue;
        }
       else if(S[i]>='0' && S[i]<='9'){
             continue;
        }
        else{
            c=1;
            break;
        }

      }
      if(c==1){
        printf("No");
    }
    if(c==0){
        printf("Yes");
    }
    
   
    }
    else{
       printf("No"); 
    }
    
     
    return 0;
}