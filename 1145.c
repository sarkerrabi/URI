#include<stdio.h>
int main(){
    int x,i,y,count=0;
        scanf("%d%d",&x,&y);
        if((x>1 && x<20) && (y>x && y<100000)){
            for( i=1;i<=y;i++){
                printf("%d",i);
                count++;
                if(count==x){
                    printf("\n");
                    count=0;
                }
                else{
                    printf(" ");
                }
            }



        }



return 0;
}
