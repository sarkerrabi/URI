#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i,a[N];
    if(N<10000){
         for(i=0;i<N;i++){
            scanf("%d",&a[i]);
           }
        for(i=0;i<N;i++){
            if(a[i]==0){
                printf("NULL\n");
            }
            else if(a[i]<0){
                if(a[i]%2==0){
                        printf("EVEN NEGATIVE\n");

                }
                else if(a[i]%2!=0){
                    printf("ODD NEGATIVE\n");
                }
            }
            else if(a[i]>0){
                     if(a[i]%2==0){
                        printf("EVEN POSITIVE\n");

                }
                else if(a[i]%2!=0){
                    printf("ODD POSITIVE\n");
                }

            }
        }
    }
return 0;
}
