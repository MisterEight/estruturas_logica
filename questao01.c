#include <stdio.h>

int main() {
    struct anonimo {
        char titulo[50];
        char autor[50];
        char editora[50];
        int ano;
    };

    struct anonimo livro;

    printf("Digite o título do livro: ");
    fgets(livro.titulo, sizeof(livro), stdin);

    printf("Digite o autor do livro: ");
    fgets(livro.autor, sizeof(livro), stdin);

    printf("Digite o editora do livro: ");
    fgets(livro.editora, sizeof(livro), stdin);

    printf("Digite o ano de lançamento do livro: ");
    scanf("%d", &livro.ano);

    printf("Título do livro: %s", livro.titulo);
    printf("Título do livro: %s", livro.autor);
    printf("Título do livro: %s", livro.editora);
    printf("Título do livro: %d", livro.ano);


}