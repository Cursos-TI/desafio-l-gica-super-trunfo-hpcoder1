#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char nomeCidade1[30], nomeCidade2[30];
    int numCidade1, numCidade2;
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTur1, pontoTur2;
    float densPop1, densPop2;
    float pibCap1, pibCap2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)

    printf("Carta 1: digite a letra do Estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Carta 1: digite o número da cidade (de 1 a 4): ");
    scanf("%d", &numCidade1);
    printf("Carta 1: digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Carta 1: digite o número de habitantes: ");
    scanf("%lu", &populacao1);
    printf("Carta 1: Digite a área da cidade em km²: ");
    scanf("%f", &area1);
    printf("Carta 1: digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Carta 1: digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontoTur1);

    printf("\n");

    printf("Carta 2: digite a letra do Estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Carta 2: digite o número da cidade (de 01 a 04): ");
    scanf("%d", &numCidade2);
    printf("Carta 2: digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Carta 2: digite o número de habitantes: ");
    scanf("%lu", &populacao2);
    printf("Carta 2: Digite a área da cidade em km²: ");
    scanf("%f", &area2);
    printf("Carta 2: digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Carta 2: digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontoTur2);

    //Área dos cálculos de densidade e PIB
    densPop1 = populacao1 / area1;
    densPop2 = populacao2 / area2;
    pibCap1 =  pib1 * 1000000000 / populacao1;
    pibCap2 =  pib2 * 1000000000 / populacao2;

    //Área dos cálculos do super poder
    superPoder1 = (pib1 * 1000000000) + populacao1 + area1 + pontoTur1 + pibCap1 - densPop1;
    superPoder2 = (pib2 * 1000000000) + populacao2 + area2 + pontoTur2 + pibCap2 - densPop2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2) {
        printf("A cidade %s tem maior população.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem maior população.\n", nomeCidade2);
    }
    if (area1 > area2) {
        printf("A cidade %s tem maior área.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem maior área.\n", nomeCidade2);
    }
    if (pib1 > pib2) {
        printf("A cidade %s tem maior PIB.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem maior PIB.\n", nomeCidade2);
    }
    if (pontoTur1 > pontoTur2) {
        printf("A cidade %s tem mais pontos turísticos.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem mais pontos turísticos.\n", nomeCidade2);
    }
    if (densPop1 < densPop2) {
        printf("A cidade %s tem menor densidade populacional.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem menor densidade populacional.\n", nomeCidade2);
    }
    if (pibCap1 > pibCap2) {
        printf("A cidade %s tem maior PIB per capta.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem maior PIB per capta.\n", nomeCidade2);
    }
    if (superPoder1 > superPoder2) {
        printf("A cidade %s tem mais super poder.\n", nomeCidade1);
    } else {
        printf("A cidade %s tem mais super poder.\n", nomeCidade2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
    }

    return 0;
}
