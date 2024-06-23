#include <stdio.h>

int carrega(int v[], int n){
    int numero;
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        v[i] = numero;
    }
    

}

int main() {
    int quantidade_valores , numero;
    
    printf("Digite a quantidade de números para o vetor: ");
    scanf("%d", &quantidade_valores);

    int valores[quantidade_valores];

    carrega(valores, quantidade_valores);

    for (int i = 0; i < quantidade_valores; i++)
    {
        printf("\n%d - %d", i, valores[i]);
    }
    

}