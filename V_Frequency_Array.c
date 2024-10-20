#include<stdio.h>
int main(){
    
   int n,m,i,j;
   scanf("%d %d",&n,&m);

   int arr[n],count[m];
   for(i=0;i<m;i++){
    count[i]=0;
   }
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(j=0;j<m;j++){
    for(i=0;i<n;i++){
        if(arr[i]==(j+1)){
          count[j]=count[j]+1;
        }
     
    }
}

for(i=0;i<m;i++){
    if(count[i]!=0){
        printf("%d\n",count[i]);
    }
}
     
    return 0;
}