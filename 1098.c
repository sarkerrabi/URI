#include<stdio.h>
int main(){
    float k,i,j;
    k=1;
     for(i=0;i<0.2;i+=0.2){
        for(j=k;j<=k+2;j++){

    printf("I=%.0f J=%.0f\n",i,j);
        }
        k=k+0.2;
    }
    k=0.8;
    for(i=0.2;i<1.2;i+=0.2){
        for(j=k;j<=k+2;j++){

    printf("I=%.1f J=%.1f\n",i,j);
        }
        k=k+0.2;
    }
    k=0.8;
    for(i=1;i<2.2;i+=0.2){
        for(j=k;j<=k+2;j++){

    printf("I=%.1f J=%.1f\n",i,j);
        }
        k=k+0.2;
    }


return 0;
}


