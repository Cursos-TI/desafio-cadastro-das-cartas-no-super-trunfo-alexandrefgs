#include <stdio.h>

int main() {
    // Declaração das variáveis
    char codigo1[10], codigo2[10];          // Strings para armazenar os códigos das cidades
    char nome1[20], nome2[20];              // Strings para armazenar os nomes das cidades
    int populacao1, populacao2;             // int para a população
    float area1, area2;                     // Float para armazenar a área (podem ter casas decimais)
    float pib1, pib2;                       // Float para armazenar o PIB
    int pontosTuristicos1, pontosTuristicos2; // INt para o número de pontos turísticos

    //printf imprime no console
    printf("Bem Vindo ao Super Triunfo Cidades\n");

    printf("Primeira Cidade: \n");

    // Captura do código da primeira cidade (sem & pois já é um ponteiro para o array)
    printf("Digite o codigo da primeira cidade: \n");
    scanf(" %s", codigo1);

    // Captura do nome da primeira cidade
    printf("Digite o nome da primeira cidade: \n");
    scanf(" %s", nome1);

    // Captura da população da primeira cidade
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1); // Usa & porque populacao1 é uma variável do tipo inteiro

    // Captura da área da primeira cidade
    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &area1); // Usa & porque é uma variável float

    // Captura do PIB da primeira cidade
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    // Captura da quantidade de pontos turísticos da primeira cidade
    printf("Digite a quantidade de ponto turisticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda cidade
    printf("Segunda Cidade: \n");

    // A partir daqui, repete o mesmo processo da primeira cidade
    printf("Digite o codigo da primeira cidade: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %s", nome2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de ponto turisticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira cidade (carta)
    printf("Primeira carta: \n");
    printf("Codigo:%s \n", codigo1);                // Exibe código
    printf("Nome:%s \n", nome1);                    // Exibe nome
    printf("Populacao:%d \n", populacao1);          // Exibe população
    printf("Area total:%f \n", area1);              // Exibe área (float com 6 casas decimais padrão)
    printf("PIB: %f \n", pib1);                     // Exibe PIB
    printf("Quantidade de pontos turisticos: %d \n", pontosTuristicos1); // Exibe pontos turísticos

    // Exibição dos dados da segunda cidade (carta)
    printf("Segunda carta: \n");
    printf("Codigo:%s \n", codigo2);
    printf("Nome:%s \n", nome2);
    printf("Populacao:%d \n", populacao2);
    printf("Area total:%f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turisticos: %d \n", pontosTuristicos2);

    return 0;
}
