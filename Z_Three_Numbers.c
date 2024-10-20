#include<stdio.h>
int main(){
    
   int k,s,x,y,z,count=0;
   scanf("%d %d",&k,&s);
   int p,q;
   for(x=s;x>=0;x--){
      p=s-x;
    for(y=0;y<=p;y++){
       z=s-x-y;
       if(x+y+z>s){
        break;
       }
     
           if((x+y+z)==s){
                count++;
            }
    }
   }
   printf("%d",count);
return 0;

}
