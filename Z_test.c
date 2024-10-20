#include<stdio.h>
int main(){
    
   int k,s,x=0,y=0,z=0,count=0;
   scanf("%d %d",&k,&s);
      while(x<=k){
      while(y<=k){
           while(z<=k){
                if((x+y+z)==s){
                    count++;
                }
              z++;

            }
            y++;
        }
        x++;
      }

      printf("%d",count);
    return 0;
}