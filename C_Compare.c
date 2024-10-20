#include<stdio.h>
#include<string.h>
int main(){
    int c=22,cc=22,q,p;
   char X[21],Y[21],temp;
   scanf("%s %s",X,Y);
   for(int j=0;X[j]!=0;j++){


     for(int i=1;X[i]!='\0';i++){
        p=X[i-1];
        q=X[i];
     if(p>q){
       temp=X[i-1];
       X[i-1]=X[i];
       X[i]=temp;
     }
     }  
   }
   for(int j=0;X[j]!=0;j++){


     for(int i=1;Y[i]!='\0';i++){
        p=Y[i-1];
        q=Y[i];
     if(p>q){
       temp=Y[i-1];
       Y[i-1]=Y[i];
       Y[i]=temp;
     }
     }  
   }
     
        // printf("%s %s",X,Y);
         int lnx=strlen(X);
        int lny=strlen(Y);
         
         if(lnx>lny){
          printf("%s",Y);
           }
       else{
     printf("%s",X); 
        }
       
    

//    for(int i=1;X[i]!='\0';i++){
//     r=X[i-1];
//     s=X[i];
//     if(r>s){
//      c=0;
//      break;
//     }
  
//    }
//    for(int i=1;Y[i]!='\0';i++){
//     int p=Y[i-1];
//      q=Y[i];

//       if(p>q){
//         cc=0;
//         break;
//     }
//    }


//    if(c!=0 && cc!=0){

//    int lnx=strlen(X);
//    int lny=strlen(Y);

//    if(lnx>lny){
//     printf("%s",Y);
//    }
//    else{
//     printf("%s",X);
//    }
//    }

//    else if(c==0 && cc!=0){
//     printf("%s",Y);
//    }
//    else if(c!=0 && cc==0){
//      printf("%s",X);
//    }
     
    return 0;
}