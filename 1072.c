#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N < 10000){
        int a[N],count1=0,count2=0,i;
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<N;i++){
            if(a[i]>=10 && a[i]<=20){
                count1++;
            }
            else {
                count2++;
            }
        }
        printf("%d in\n",count1);
        printf("%d out\n",count2);
    }


return 0;
}
