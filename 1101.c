#include<stdio.h>
int main(){
    int sum=0,i,m=0,n=0,max=0,min=0;

		while(scanf("%d%d",&m,&n)){

			if(m>0 && n>0){
			if(m>n){
				 max=m;
				 min=n;
			}
			else{
				max=n;
				min=m;
			}
			for(i=min;i<=max;i++){
				printf("%d ",i);
				sum=sum+i;
			}
			printf("Sum=%d\n",sum);
			sum=0;
			}
			else {
				break;
			}
		}
return 0;
}
