#include<stdio.h>
#include<string.h>
int main(){
    
char a[11],b[11];

scanf("%s %s",a,b);
int lna=strlen(a);
int lnb=strlen(b);

printf("%d %d\n",lna,lnb);
printf("%s%s\n",a,b);

int temp=a[0];
a[0]=b[0];
b[0]=temp;
printf("%s %s",a,b);
     
    return 0;
}