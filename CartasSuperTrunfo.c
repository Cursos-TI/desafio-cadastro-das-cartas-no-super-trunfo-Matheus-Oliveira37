#include <stdio.h>

int main() {

    // Variáveis da carta 1

    char estado; // Variável para armazenar o estado
    char codigo[20]; // Variável para armazenar o código da carta
    char cidade[20]; // Variável para armazenar o nome da cidade
    int populacao; // Variável para armazenar a população
    float area; // Variável para armazenar a área em km²
    float PIB; // Variável para armazenar o PIB do estado
    int pontos; // Variável para armazenar o número de pontos turísticos
    float densidade;   // Variável para armazenar a densidade populacional
    float PIBpercapita; // Variável para armazenar o PIB per capita

    // Variáveis da carta 2

    char estado2; // Variável para armazenar o segundo estado
    char codigo2[20]; // Variável para armazenar o código da segunda carta
    char cidade2[20]; // Variável para armazenar o nome da segunda cidade
    int populacao2;  // Variável para armazenar a população da segunda cidade
    float area2; // Variável para armazenar a área da segunda cidade em km²
    float PIB2; // Variável para armazenar o PIB do segundo estado
    int pontos2; // Variável para armazenar o número de pontos turísticos da segunda cidade
    float densidade2; // Variável para armazenar a densidade populacional da segunda cidade
    float PIBpercapita2; // Variável para armazenar o PIB per capita da segunda cidade

    // Cadastro da Carta 1

    printf("Cadastre sua carta:\n"); // Solicita o cadastro da carta
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1 - \n"); // Indica que é a carta 1

    printf("Escolha um estado com a letra de A a H:\n"); // Solicita o estado
    scanf(" %c", &estado); // Lê o estado

    printf("Coloque a inicial escolhida:\n"); // Solicita o código da carta
    scanf("%s", codigo); // Lê o código da carta

    printf("Escolha uma cidade desse estado:\n"); // Solicita o nome da cidade
    scanf("%s", cidade); // Lê o nome da cidade

    printf("Escreva a população: \n"); // Solicita a população
    scanf("%d", &populacao); // Lê a população

    printf("Qual a área em km²: \n"); // Solicita a área em km²
    scanf("%f", &area); // Lê a área

    printf("Qual o PIB do estado: \n"); // Solicita o PIB do estado
    scanf("%f", &PIB); // Lê o PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicita o número de pontos turísticos
    scanf("%d", &pontos); // Lê o número de pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Cadastro da Carta 2

    printf("Cadastre sua carta:\n"); // Solicita o cadastro da segunda carta
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 2 - \n"); // Indica que é a carta 2

    printf("Escolha um estado com a letra de A a H:\n"); // Solicita o estado
    scanf(" %c", &estado2); // Lê o estado

    printf("Coloque a inicial escolhida:\n"); // Solicita o código da carta
    scanf("%s", codigo2); // Lê o código da carta

    printf("Escolha uma cidade desse estado:\n"); // Solicita o nome da cidade
    scanf("%s", cidade2); // Lê o nome da cidade

    printf("Escreva a população: \n"); // Solicita a população
    scanf("%d", &populacao2); // Lê a população

    printf("Qual a área em km²: \n"); // Solicita a área em km²
    scanf("%f", &area2); // Lê a área

    printf("Qual o PIB do estado: \n"); // Solicita o PIB do estado
    scanf("%f", &PIB2); // Lê o PIB

    printf("Quantos pontos turísticos possui: \n"); // Solicita o número de pontos turísticos
    scanf("%d", &pontos2); // Lê o número de pontos turísticos
    printf("--------------------------------------\n"); // Linha de separação

    // Exibição das Cartas
    
    printf("Cartas cadastradas:\n"); // Exibe as cartas cadastradas
    printf("--------------------------------------\n"); // Linha de separação
    printf("Carta 1:\n"); // Indica que é a carta 1
    printf("Estado - %c\n", estado); // Exibe o estado
    printf("Código da carta - %s\n", codigo); // Exibe o código da carta
    printf("Cidade - %s\n", cidade); // Exibe o nome da cidade
    printf("População - %d\n", populacao); // Exibe a população
    printf("Área em km² - %.2fkm²\n", area); // Exibe a área em km²
    printf("PIB - %.2f\n", PIB); // Exibe o PIB do estado
    printf("Número de Pontos Turísticos - %d pontos\n", pontos); // Exibe o número de pontos turísticos
    densidade = (float)populacao / area; // Calcula a densidade populacional
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade); // Exibe a densidade populacional
    PIBpercapita = PIB / populacao; // Calcula o PIB per capita
    printf("PIB per capita - %.2f\n", PIBpercapita); // Exibe o PIB per capita

    printf("--------------------------------------\n"); // Linha de separação

    printf("Carta 2:\n"); // Indica que é a carta 2
    printf("Estado - %c\n", estado2); // Exibe o estado
    printf("Código da carta - %s\n", codigo2); // Exibe o código da carta
    printf("Cidade - %s\n", cidade2); // Exibe o nome da cidade
    printf("População - %d\n", populacao2); // Exibe a população
    printf("Área em km² - %.2fkm²\n", area2); // Exibe a área em km²
    printf("PIB - %.2f\n", PIB2); // Exibe o PIB do estado
    printf("Número de Pontos Turísticos - %d pontos\n", pontos2); // Exibe o número de pontos turísticos
    densidade2 = (float)populacao2 / area2; // Calcula a densidade populacional
    printf("Densidade Populacional - %.2f habitantes/km²\n", densidade2); // Exibe a densidade populacional
    PIBpercapita2 = PIB2 / populacao2; // Calcula o PIB per capita
    printf("PIB per capita - %.2f\n", PIBpercapita2); // Exibe o PIB per capita

    return 0;
}