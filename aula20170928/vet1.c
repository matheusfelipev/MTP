#include<stdio.h>
#include<string.h>
#include<time.h>

int main ()
{
    srand(time(0));
    int numeros[1000];
    int i=0,j
    ;
    float media=0;
    printf("Digite um numero inteiro nao negativo");
    scanf ("%d",&i);
    for(j=0;j<1000;j++){
        numeros[j]=rand()%(i+1);
    }
    for(j=0;j<1000;j++){
        media=media+numeros[j];
    }
    media=media/1000;
    printf("A media dos numeros e %f\n",media);
}
