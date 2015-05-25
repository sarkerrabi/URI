#include<stdio.h>
int main(){

int sd,sm,sh,ss,ed,eh,em,es,d,st,dd,h,m,s,hh;
printf("Dia ");
scanf("%d",&sd);
scanf("%d : %d : %d",&sh,&sm,&ss);
printf("Dia ");
scanf("%d",&ed);
scanf("%d : %d : %d",&eh,&em,&es);

st=(ed*60*60*24+eh*60*60+em*60+es)-(sd*60*60*24+sh*60*60+sm*60+ss);

        d=st/(24*60*60);
        dd=st%(24*60*60);
        h=dd/(60*60);
        hh=dd%(60*60);
        m=hh/60;
        s=hh%60;
        printf("%d dia(s)\n",d);
        printf("%d hora(s)\n",h);
        printf("%d minuto(s)\n",m);
        printf("%d segundo(s)\n",s);

return 0;
}
