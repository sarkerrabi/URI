#include<stdio.h>
int main(){
    int i,n,m;
    scanf("%d",&n);
    if(1<n && n<1000){
        for(i=1;i<=10;i++){
            m=i*n;
            printf("%d x %d = %d\n",i,n,m);
        }

    }




return 0;
}
