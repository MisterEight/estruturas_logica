#include <stdio.h>

float minimax(float v[], int n, float *a, float *b) {
    float max = 0, min = 0;
    min = v[0];
    for (int i = 0; i < n; i++)
    {
        if(v[i] > max){
            max = v[i];
        }
        if (v[i] < min)
        {
            min = v[i];
        }   
    }

    *a = max;
    *b = min;
    
    

}

int main() {
    int quantidade_numeros;
    float numero_real;
    float numero_a, numero_b;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidade_numeros);

    float numeros[quantidade_numeros];

    for (int i = 0; i < quantidade_numeros; i++)
    {
        printf("\nDigite um número real: ");
        scanf("%f", &numero_real);

        numeros[i] = numero_real;
    }

    minimax(numeros, quantidade_numeros, &numero_a, &numero_b);

    printf("\nMenor numero: %f", numero_a);
    printf("\nMaior numero: %f", numero_b);
    
}