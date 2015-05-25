#include<stdio.h>
int main(){
    int i,a[5],count=0,count1=0,count2=0,count3=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
            if(a[i]%2==0){
                count++;
            }
            if(a[i]%2!=0){
                count1++;
            }
            if(a[i]>0){
                count2++;
            }
            if(a[i]<0){
                count3++;
            }
    }
    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",count1);
    printf("%d valor(es) positivo(s)\n",count2);
    printf("%d valor(es) negativo(s)\n",count3);


return 0;
}
