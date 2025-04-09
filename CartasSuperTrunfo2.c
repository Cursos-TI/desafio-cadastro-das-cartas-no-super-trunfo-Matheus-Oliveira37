#include <stdio.h>

int main() {

    // Variáveis da carta 1

    char estado;
    char codigo[23];
    char cidade[23];
    int populacao;
    float area;
    float PIB;
    int pontos;
    float densidade;
    float PIBpercapita;

    // Variáveis da carta 2

    char estado2;
    char codigo2[23];
    char cidade2[23];
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;
    float densidade2;
    float PIBpercapita2;

    // Cadastro da Carta 1

    printf("Cadastre sua carta:\n");
    printf("--------------------------------------\n");
    printf("Carta 1 - \n");

    printf("Escolha um estado com a letra de A a H:\n");
    scanf(" %c", &estado);

    printf("Coloque a inicial escolhida:\n");
    scanf("%s", codigo);

    printf("Escolha uma cidade desse estado:\n");
    scanf("%s", cidade);

    printf("Escreva a população: \n");
    scanf("%d", &populacao);

    printf("Qual a área em km²: \n");
    scanf("%f", &area);

    printf("Qual o PIB do estado: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos possui: \n");
    scanf("%d", &pontos);
    printf("--------------------------------------\n");

    // Cadastro da Carta 2

    printf("Cadastre sua carta:\n");
    printf("--------------------------------------\n");
    printf("Carta 2 - \n");

    printf("Escolha um estado com a letra de A a H:\n");
    scanf(" %c", &estado2);

    printf("Coloque a inicial escolhida:\n");
    scanf("%s", codigo2);

    printf("Escolha uma cidade desse estado:\n");
    scanf("%s", cidade2);

    printf("Escreva a população: \n");
    scanf("%d", &populacao2);

    printf("Qual a área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB do estado: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos possui: \n");
    scanf("%d", &pontos2);
    printf("--------------------------------------\n");

    // Exibição das Cartas
    
    printf("Cartas cadastradas:\n");
    printf("--------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado - %c\n", estado);
    printf("Código da carta - %s 01\n", codigo);
    printf("Cidade - %s\n", cidade);
    printf("População - %d\n", populacao);
    printf("Área em km² - %.2fkm²\n", area);
    printf("PIB - %.2f\n", PIB);
    printf("Número de Pontos Turísticos - %d pontos\n", pontos);
    densidade = (float) populacao / area;
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade);
    PIBpercapita = PIB / populacao;
    printf("PIB per capita - %.2f\n", PIBpercapita);

    printf("--------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado - %c\n", estado2);
    printf("Código da carta - %s 01\n", codigo2);
    printf("Cidade - %s\n", cidade2);
    printf("População - %d\n", populacao2);
    printf("Área em km² - %.2fkm²\n", area2);
    printf("PIB - %.2f\n", PIB2);
    printf("Número de Pontos Turísticos - %d pontos\n", pontos2);
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade2);
    PIBpercapita2 = PIB2 / populacao2;
    printf("PIB per capita - %.2f\n", PIBpercapita2);


    return 0;
}