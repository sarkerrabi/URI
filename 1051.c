#include<stdio.h>
int main(){
    float s,q,d,tax1,tax2,tax,tax3,p;
    while(scanf("%f",&s)!=EOF){
        if(0<=s && s<=2000){
            printf("Isento\n");
        }
        else if(s>2000 && s<=3000.00){
             d=s-2000.00;
             tax=d*(8/100.00);
             printf("R$ %.2f\n",tax);

        }
        else if(s>3000 && s<=4500){
             p=s-3000;
             d=s-p-2000.00;
             tax1=p*(18/100.00);
             tax2=d*(8/100.00);
             tax=tax1+tax2;
            printf("R$ %.2f\n",tax);

        }
        else if(s>4500){
             q=s-4500;
             p=s-q-3000;
             d=s-p-q-2000.00;
             tax1=p*(18/100.00);
             tax2=d*(8/100.00);
             tax3=q*(28/100.00);
            tax=tax1+tax2+tax3;
            printf("R$ %.2f\n",tax);

        }


    }

return 0;
}
