#include <stdio.h>
#include <string.h>

int main() {
    struct Voo{
        char cidade_origem[50];
        char cidade_destino[50];
        char data_partida[50];
        char data_chegada[50];
    };

    struct Voo voo_brasilia;
        strcpy(voo_brasilia.cidade_origem,"Lago sul");
        strcpy(voo_brasilia.cidade_destino,"São Luís");
        strcpy(voo_brasilia.data_partida,"28/06/2024 08:00");
        strcpy(voo_brasilia.data_chegada,"28/06/2024 12:00");
    struct Voo voo_sao_paulo;
        strcpy(voo_sao_paulo.cidade_origem,"Guarulhos");
        strcpy(voo_sao_paulo.cidade_destino,"Lago Sul");
        strcpy(voo_sao_paulo.data_partida,"12/01/2025 15:00");
        strcpy(voo_sao_paulo.data_chegada,"12/01/2025 20:00");

    printf("Voo de %s para %s, sairá em %s e chegará %s", voo_brasilia.cidade_origem, voo_brasilia.cidade_destino, voo_brasilia.data_partida, voo_brasilia.data_chegada);

    printf("\n\nVoo de %s para %s, sairá em %s e chegará %s", voo_sao_paulo.cidade_origem, voo_sao_paulo.cidade_destino, voo_sao_paulo.data_partida, voo_sao_paulo.data_chegada);

    FILE * voos;

    voos = fopen("voos.txt", "w");

    fprintf(voos, "%s\n", voo_brasilia.cidade_origem);
    fprintf(voos, "%s\n", voo_brasilia.cidade_destino);
    fprintf(voos, "%s\n", voo_brasilia.data_partida);
    fprintf(voos, "%s\n", voo_brasilia.data_chegada);

    fprintf(voos, "%s\n", voo_sao_paulo.cidade_origem);
    fprintf(voos, "%s\n", voo_sao_paulo.cidade_destino);
    fprintf(voos, "%s\n", voo_sao_paulo.data_partida);
    fprintf(voos, "%s\n", voo_sao_paulo.data_chegada);


}