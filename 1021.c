#include <stdio.h>
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int nota100, nota50, nota20, nota10, nota5, nota2, moeda1;
    int moeda50=0, moeda25=0, moeda10=0, moeda05=0, moeda01=0;
    double num, aux;
    scanf("%lf",&num);

    if ( num/1000 != 0 )
    {
        //10 é a quantidade de notas de 100 para ser 1000.
        nota100 = 10* (num/1000);
    }
    else
    {
        nota100=0;
    }
        // pega só as centenas dos milhares para a nota de 100.
    if ( ( num-(100*nota100) )/100 != 0 )
    {
        nota100 += ( num-100*nota100 )/100;
    }
    else
    {
        nota100 = 0;
    }
        //Pega as dezenas das centenas para nota de 50.
    if(( num-(100*nota100))/50 != 0)
    {
        nota50= (num-(100*nota100))/50;
    }
    else
    {
        nota50=0;
    }
        //Pega as dezenas das centenas para nota de 20.
    if( ( num-( 100*nota100 + 50*nota50 ) )/20 != 0 )
    {
        nota20 = ( num-( 100*nota100 + 50*nota50 ) )/20;
    }
    else
    {
        nota20=0;
    }

        //Pega as dezenas das centenas para nota de 10.
    if( ( num-(  100*nota100 + 50*nota50 + 20*nota20 ) )/10 != 0 )
    {
        nota10= ( num-(  100*nota100 + 50*nota50 + 20*nota20 ) )/10;
    }
    else
    {
        nota10= 0;
    }

         //Pega as unidades das dezenas para nota de 5.
    if( ( num-(  100*nota100 + 50*nota50 + 20*nota20 + 10*nota10) )/5 != 0 )
    {
        nota5= ( num-(  100*nota100 + 50*nota50 + 20*nota20 + 10*nota10) )/5 ;
    }
    else
    {
        nota5= 0;
    }

        //Pega as unidades das dezenas para nota de 2.
    if( ( num-(100*nota100 + 50*nota50 + 20*nota20 + 10*nota10 + 5*nota5) )/2 != 0 )
    {
        nota2= ( num-(100*nota100 + 50*nota50 + 20*nota20 + 10*nota10 + 5*nota5) )/2 ;
    }
    else
    {
        nota2 = 0;
    }
           //Pega as unidades das dezenas para moeda de 1.
    if( ( num-(100*nota100 + 50*nota50 + 20*nota20 + 10*nota10 + 5*nota5 + 2*nota2) )/1 != 0 )
    {
        moeda1= ( num-( 100*nota100 + 50*nota50 + 20*nota20 + 10*nota10 + 5*nota5 + 2*nota2) )/1;
    }
    else
    {
        moeda1 = 0;
    }

    aux =  num-( 100*nota100 + 50*nota50 + 20*nota20 + 10*nota10 + 5*nota5 + 2*nota2 + moeda1);

    while(aux>=0.5)
    {
        moeda50++;
        aux-=0.5;
    }

    while(aux>=0.25)
    {
        moeda25++;
        aux-=0.25;
    }

    while(aux>=0.10)
    {
        moeda10++;
        aux-=0.10;
    }

    while(aux>=0.05)
    {
        moeda05++;
        aux-=0.05;
    }

    while(aux>=0.01)
    {
        moeda01++;
        aux-=0.01;
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda05, moeda01);
    
    return 0;
}