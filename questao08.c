#include <stdio.h>

int strlen2(char string[]) {
    char *inicio_string, *final_string;
    int tamanho_string;

    inicio_string = string;
    final_string = string;

    while (*final_string != '\0') {
        final_string++;
    }

    tamanho_string = final_string - inicio_string;

    

    printf("Length: %d", tamanho_string);

    return 0;
}

int main() {
    char nome1[20];

    printf("Digite um nome: ");
    fgets(nome1, sizeof(nome1), stdin);

    nome1[strcspn(nome1, "\n")] = 0;

    strlen2(nome1);
}