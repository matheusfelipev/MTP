#include<stdio.h>
#include<string.h>

int main()
{
    int vetor[10];
    int n, j,somatoria=0, produto=1;
    for(j=0;j<9;j++){
        printf("digite um numero");
        scanf("%d",&n);
        vetor[j]= n;
        somatoria=somatoria+vetor[j];
        produto=produto*vetor[j];
        }
        printf("somatoria = %d\n",somatoria);
        printf("produto = %d\n",produto);

}

