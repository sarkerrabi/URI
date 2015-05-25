#include<stdio.h>
int main(){
 int i,A,N;
 scanf("%d%d",&A,&N);
 while(N<=0){
    scanf("%d",&N);
 }
 int p,sum=0;
 p=A+N;
for(i=A;i<p;i++){
    sum=sum+i;
}
printf("%d\n",sum);
return 0;
}
