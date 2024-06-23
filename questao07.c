#include <stdio.h>

void puts2(char s[]) {
    printf("A string é: %s", s);
    printf("\n");
    
}

int main() {
    char s[50];

    printf("Digite uma string de até 50 caracteres: ");
    fgets(s, sizeof(s), stdin);

    puts2(s);

}