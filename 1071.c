#include<stdio.h>
int main(){
    int x,i,t,y,sum=0;
    scanf("%d%d",&x,&y);
            if(x>y){
                t=x;
                x=y;
                y=t;
            }


            for(i=x+1;i<y;i++){
                    if(i%2!=0){
                      sum=sum+i;
                    }

            }
            printf("%d\n",sum);

return 0;
}
