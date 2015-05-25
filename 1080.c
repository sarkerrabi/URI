#include<stdio.h>
int main(){
    int a[100],i,max=0,maxP=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        if(a[i]>max){
            max=a[i];
            maxP=i;

        }
    }
    maxP=maxP+1;
    printf("%d\n",max);
    printf("%d\n",maxP);




return 0;
}
