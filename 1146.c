#include<stdio.h>
int main(){
    int i,x;
    while(scanf("%d",&x)!=EOF){
        for(i=1;i<x;i++){
            printf("%d ",i);
        }

        if(x==0){
            break;
        }
        printf("%d\n",i);
    }




return 0;
}
