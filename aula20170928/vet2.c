#include<stdio.h>
#include<string.h>
int main()
{
    int vetor[10];
    int i, j,x, n;
    for(j=0;j<10;j++){
        printf("digite um numero");
        scanf("%d",&n);
        vetor[j]= n;
        }
        for(i=0,j=9;i<5;i++,j--){
            x=vetor[j];
            vetor[j]=vetor[i];
            vetor[i]=x;
        }
        for(i=0;i<10;i++){
            printf("%d\n",vetor[i]);
        }

}
