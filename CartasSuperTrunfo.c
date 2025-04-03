#include <stdio.h>

    //definindo variáveis

int main() {
    
    char estado;
    char codigo;
    char cidade[60];
    int populacao;
    float area;
    float PIB;
    int pontos;

    char estado2;
    char codigo2;
    char cidade2[60];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;


    //cadastrando carta 1:

    printf("Cadastre sua carta:\n");
    printf("--------------------------------------\n");
    printf("Carta 1 - \n");

    printf("Escolha um estado com a letra de A a H:\n");
    scanf("%s", &estado);

    printf("Coloque a incial escolhida:\n");
    scanf("%s", &codigo);

    printf("Escolha uma cidade desse estado:\n");
    scanf("%s", &cidade);

    printf("Escreva a população: \n");
    scanf("%d", &populacao);

    printf("Qual a área em km²: \n");
    scanf("%f", &area);

    printf("Qual o PIB do estado: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos possui: \n");
    scanf("%d", &pontos);
    printf("--------------------------------------\n");

    //cadastrando carta 2:
    
    printf("Cadastre sua carta:\n");
    printf("Carta 2 - \n");

    printf("Escolha um estado com a letra de A a H:\n");
    scanf("%s", &estado2);

    printf("Coloque a incial escolhida:\n");
    scanf("%s", &codigo2);

    printf("Escolha uma cidade desse estado:\n");
    scanf("%s", &cidade2);

    printf("Escreva a população: \n");
    scanf("%d", &populacao2);

    printf("Qual a área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB do estado: \n");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turísticos possui: \n");
    scanf("%d", &pontos2);

    printf("--------------------------------------\n");

    printf("Cartas cadastradas com sucesso!\n");
    printf("Confira abaixo: \n");
    printf("--------------------------------------\n");

    printf("Carta 1: \n");
    printf("Estado - %s\n", &estado);
    printf("Código da carta - %s01\n", &codigo);
    printf("Cidade - %s\n", &cidade);
    printf("População - %d\n", populacao);
    printf("Área em km² - %f\n", area);
    printf("PIB - %f\n", PIB);
    printf("Número de Pontos Turísticos - %d\n", pontos);
    printf("--------------------------------------\n");
    printf("Carta 2: \n");
    printf("Estado - %s\n", &estado2);
    printf("Código da carta - %s02\n", &codigo2);
    printf("Cidade - %s\n", &cidade2);
    printf("População - %d\n", populacao2);
    printf("Área em km² - %f\n", area2);
    printf("PIB - %f\n", PIB2);
    printf("Número de Pontos Turísticos - %d\n", pontos2);

    return 0;

}
