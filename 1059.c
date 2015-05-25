#include<stdio.h>
int main(){

    float a[6],sum=0,avg;
    int j,i,count=0;

    for(j=0;j<6;j++){
   scanf("%f",&a[j]);

    }

    for(i=0;i<6;i++){
        if(a[i]>0){
                sum=sum+a[i];
            count++;
        }

    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);

return 0;
}
