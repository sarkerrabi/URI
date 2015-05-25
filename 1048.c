#include<stdio.h>
int main(){

    float s,p,n,r;
    int e;
    scanf("%f",&s);
        if(0<s && s<=400){
            n=s*(15/100.0);
            r=s+n;
            e=15;
            printf("Novo salario: %.2f\n",r);
            printf("Reajuste ganho: %.2f\n",n);
            printf("Em percentual: %d %%\n",e);
        }
        else if(400<s && s<=800){
            n=s*(12/100.0);
            r=s+n;
            e=12;
            printf("Novo salario: %.2f\n",r);
            printf("Reajuste ganho: %.2f\n",n);
            printf("Em percentual: %d %%\n",e);
        }
        else if(800<s && s<=1200){
            n=s*(10/100.0);
            r=s+n;
            e=10;
            printf("Novo salario: %.2f\n",r);
            printf("Reajuste ganho: %.2f\n",n);
            printf("Em percentual: %d %%\n",e);
        }
        else if(1200<s && s<=2000){
            n=s*(7/100.0);
            r=s+n;
            e=7;
            printf("Novo salario: %.2f\n",r);
            printf("Reajuste ganho: %.2f\n",n);
            printf("Em percentual: %d %%\n",e);
        }
        else if(s>2000){
            n=s*(4/100.0);
            r=s+n;
            e=4;
            printf("Novo salario: %.2f\n",r);
            printf("Reajuste ganho: %.2f\n",n);
            printf("Em percentual: %d %%\n",e);
        }







return 0;
}
