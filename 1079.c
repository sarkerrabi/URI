#include<stdio.h>

int main(){
    int i,N;
    scanf("%d",&N);
    float x,y,z,sum,avg;
    for(i=1;i<=N;i++){
        scanf("%f%f%f",&x,&y,&z);
        sum=x*2+y*3+z*5;
        avg=sum/10.0;
        printf("%.1f\n",avg);
    }


return 0;
}
