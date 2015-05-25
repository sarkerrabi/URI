#include<stdio.h>
int main(){
    int i,m,n,a[6];
        while(scanf("%d",&n)!=EOF){
            if(n%2==0){
                    m=n+1;
                }
                else{
                    m=n;
                }
            a[0]=m;
            for(i=1;i<6;i++){
                a[i]=a[i-1]+2;
            }

            for(i=0;i<6;i++){
                printf("%d\n",a[i]);
            }
        }

return 0;
}
