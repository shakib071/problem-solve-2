#include<stdio.h>
int main(){
    
    int A;
    long long int B;
    char C;
    float D;
    double E;
    scanf("%d %lld %c %f %lf",&A,&B,&C,&D,&E);
    printf("%d\n%lld\n%c\n%0.2f\n",A,B,C,D);
    printf("%.1lf",E);
   
    return 0;
}