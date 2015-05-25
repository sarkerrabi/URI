#include<stdio.h>

int main(){
    int i,N,x,co=0,ra=0,sa=0,total;
    char a;
    float coP,raP,saP;
    scanf("%d",&N);
   for(i=1;i<=N;i++){
    scanf("%d %c",&x,&a);
    if(a=='C'){
        co=co+x;
    }
     if(a=='R'){
        ra=ra+x;
    }
     if(a=='S'){
        sa=sa+x;
    }

   }
   total=sa+ra+co;
   coP=((float)co*100)/total;
   saP=((float)sa*100)/total;
   raP=((float)ra*100)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",co);
    printf("Total de ratos: %d\n",ra);
    printf("Total de sapos: %d\n",sa);
    printf("Percentual de coelhos: %.2f %%\n",coP);
    printf("Percentual de ratos: %.2f %%\n",raP);
    printf("Percentual de sapos: %.2f %%\n",saP);
return 0;
}
