#include<stdio.h>


int main(){

    int N,m,i,sum;
    scanf("%d",&N);
       if(N>5 && N<2000){
            if(N%2==0){
                m=N;
            }
            else{
                m=N-1;
            }
        for(i=1;i<=m;i++){
            if(i%2==0){
                sum=i*i;
                printf("%d^2 = %d\n",i,sum);
            }
        }
       }




return 0;
}
