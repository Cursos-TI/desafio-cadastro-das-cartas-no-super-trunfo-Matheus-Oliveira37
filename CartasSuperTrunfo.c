#include <stdio.h>

int main() {

    // Variáveis da carta 1

    char estado; // Estado da carta
    char codigo[23]; // Código da carta
    char cidade[23]; // Cidade da carta
    int populacao; // População da carta
    float area; // Área da carta
    float PIB; // PIB da carta
    int pontos; // Pontos turísticos da carta
    float densidade; // Densidade populacional da carta
    float PIBpercapita; // PIB per capita da carta
    float superpoder; // Superpoder da carta

    // Variáveis da carta 2

    char estado2; // Estado da carta 2
    char codigo2[23]; // Código da carta 2
    char cidade2[23]; // Cidade da carta 2
    int populacao2; // População da carta 2
    float area2; // Área da carta 2
    float PIB2; // PIB da carta 2
    int pontos2; // Pontos turísticos da carta 2
    float densidade2; // Densidade populacional da carta 2
    float PIBpercapita2; // PIB per capita da carta 2
    float superpoder2; // Superpoder da carta 2

    int resultadoCartas; // Resultado da comparação das cartas

    // Cadastro da Carta 1

    printf("Cadastre sua carta:\n"); // Início do cadastro
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1 - \n"); // Título do cadastro

    printf("Escolha um estado com a letra de A a H:\n"); // Solicitação do estado
    scanf(" %c", &estado); // Leitura do estado

    printf("Coloque a inicial escolhida:\n"); // Solicitação do código
    scanf("%s", codigo); // Leitura do código

    printf("Escolha uma cidade desse estado:\n"); // Solicitação da cidade
    scanf("%s", cidade); // Leitura da cidade

    printf("Escreva a população: \n"); // Solicitação da população
    scanf("%d", &populacao); // Leitura da população

    printf("Qual a área em km²: \n");   // Solicitação da área
    scanf("%f", &area); // Leitura da área

    printf("Qual o PIB do estado: \n"); // Solicitação do PIB
    scanf("%f", &PIB); // Leitura do PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicitação dos pontos turísticos
    scanf("%d", &pontos); // Leitura dos pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Cadastro da Carta 2 

    printf("Cadastre sua carta:\n"); // Início do cadastro
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 2 - \n"); // Título do cadastro

    printf("Escolha um estado com a letra de A a H:\n"); // Solicitação do estado
    scanf(" %c", &estado2); // Leitura do estado

    printf("Coloque a inicial escolhida:\n"); // Solicitação do código
    scanf("%s", codigo2); // Leitura do código

    printf("Escolha uma cidade desse estado:\n"); // Solicitação da cidade
    scanf("%s", cidade2); // Leitura da cidade

    printf("Escreva a população: \n"); // Solicitação da população
    scanf("%d", &populacao2); // Leitura da população

    printf("Qual a área em km²: \n"); // Solicitação da área
    scanf("%f", &area2); // Leitura da área

    printf("Qual o PIB do estado: \n"); // Solicitação do PIB
    scanf("%f", &PIB2); // Leitura do PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicitação dos pontos turísticos
    scanf("%d", &pontos2); // Leitura dos pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Exibição das Cartas
    // Exibição da carta 1

    printf("Cartas cadastradas:\n"); // Título da exibição
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1:\n"); // Título da carta 1
    printf("Estado - %c\n", estado); // Exibição do estado
    printf("Código da carta - %s 01\n", codigo); // Exibição do código
    printf("Cidade - %s\n", cidade); // Exibição da cidade
    printf("População - %d\n", populacao); // Exibição da população
    printf("Área em km² - %.2fkm²\n", area); // Exibição da área
    printf("PIB - %.2f\n", PIB); // Exibição do PIB
    printf("Número de Pontos Turísticos - %d pontos\n", pontos); // Exibição dos pontos turísticos
    densidade = (float) populacao / area; // Cálculo da densidade populacional
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade); // Exibição da densidade populacional
    PIBpercapita = PIB / populacao; // Cálculo do PIB per capita
    printf("PIB per capita - %.2f\n", PIBpercapita); // Exibição do PIB per capita
    superpoder = (float) populacao + area + PIB + pontos + densidade + PIBpercapita; // Cálculo do superpoder
    printf("Superpoder - %.2f\n", superpoder); // Exibição do superpoder

    printf("--------------------------------------\n"); // Linha de separação

    // Exibição da carta 2

    printf("Carta 2:\n"); // Título da carta 2
    printf("Estado - %c\n", estado2); // Exibição do estado 2
    printf("Código da carta - %s 01\n", codigo2); // Exibição do código 2
    printf("Cidade - %s\n", cidade2); // Exibição da cidade 2
    printf("População - %d\n", populacao2); // Exibição da população 2
    printf("Área em km² - %.2fkm²\n", area2); // Exibição da área 2
    printf("PIB - %.2f\n", PIB2); // Exibição do PIB 2
    printf("Número de Pontos Turísticos - %d pontos\n", pontos2); // Exibição dos pontos turísticos 2
    densidade2 = (float) populacao2 / area2; // Cálculo da densidade populacional 2
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade2); // Exibição da densidade populacional 2
    PIBpercapita2 = PIB2 / populacao2; // Cálculo do PIB per capita 2
    printf("PIB per capita - %.2f\n", PIBpercapita2); // Exibição do PIB per capita 2
    superpoder2 = (float) populacao2 + area2 + PIB2 + pontos2 + densidade2 + PIBpercapita2; // Cálculo do superpoder 2
    printf("Superpoder - %.2f\n", superpoder2); // Exibição do superpoder 2

    printf("--------------------------------------\n"); // Linha de separação

    // Comparação das cartas

    printf("Comparação das cartas:\n"); // Título da comparação
    printf("População - %d\n", (int) populacao > populacao2); // Comparação da população
    printf("Área - %d\n", (int) area > area2); // Comparação da área
    printf("PIB - %d\n", (int) PIB > PIB2); // Comparação do PIB
    printf("Pontos Turísticos - %d\n", (int) pontos > pontos2); // Comparação dos pontos turísticos
    printf("Densidade Populacional - %d\n", (int) densidade < densidade2); // Comparação da densidade populacional
    printf("PIB per capita - %d\n", (int) PIBpercapita > PIBpercapita2); // Comparação do PIB per capita
    printf("Superpoder - %d\n", (int) superpoder > superpoder2); // Comparação do superpoder

    printf("--------------------------------------\n"); // Linha de separação
    resultadoCartas = (int) populacao > populacao2; // Comparação da população
    resultadoCartas = (int) area > area2; // Comparação da área
    resultadoCartas = (int) PIB > PIB2; // Comparação do PIB
    resultadoCartas = (int) pontos > pontos2;  // Comparação dos pontos turísticos
    resultadoCartas = (int) densidade < densidade2; // Comparação da densidade populacional
    resultadoCartas = (int) PIBpercapita > PIBpercapita2; // Comparação do PIB per capita
    resultadoCartas = (int) superpoder > superpoder2; // Comparação do superpoder
    printf("Resultado: %d\n", resultadoCartas); // Exibição do resultado da comparação



    return 0;
}