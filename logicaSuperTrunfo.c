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
    int escolha;

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
    printf("\n");

    //Área dos cálculos de densidade e PIB
    densPop1 = populacao1 / area1;
    densPop2 = populacao2 / area2;
    pibCap1 =  pib1 * 1000000000 / populacao1;
    pibCap2 =  pib2 * 1000000000 / populacao2;

    //Área dos cálculos do super poder
    superPoder1 = (pib1 * 1000000000) + populacao1 + area1 + pontoTur1 + pibCap1 - densPop1;
    superPoder2 = (pib2 * 1000000000) + populacao2 + area2 + pontoTur2 + pibCap2 - densPop2;

    //Área para exibição dos dados das cidades
    //Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%d\n", estado1, numCidade1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop1);
    printf("PIB per Capita: %.2f reais\n", pibCap1);
    printf("Super poder: %.2f\n", superPoder1);
    printf("\n");
    
    //Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c0%d\n", estado2, numCidade2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("PIB per Capita: %.2f reais\n", pibCap2);
    printf("Super poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("Escolha qual atributo comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha);
    printf("\n");

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    switch (escolha)
    {
        case 1:
            printf("### %s contra %s no atributo População! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %lu\n", nomeCidade1, populacao1);
            printf("%s: %lu\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("A cidade %s tem maior população e venceu!\n", nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("A cidade %s tem maior população e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;
    
        case 2:
            printf("### %s contra %s no atributo Área! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %.2f\n", nomeCidade1, area1);
            printf("%s: %.2f\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("A cidade %s tem maior área e venceu!\n", nomeCidade1);
            } else if (area1 < area2) {
                printf("A cidade %s tem maior área e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 3:
            printf("### %s contra %s no atributo PIB! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %.2f\n", nomeCidade1, pib1);
            printf("%s: %.2f\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("A cidade %s tem maior PIB e venceu!\n", nomeCidade1);
            } else if (pib1 < pib2) {
                printf("A cidade %s tem maior PIB e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 4:
            printf("### %s contra %s no atributo Pontos Turísticos! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %d\n", nomeCidade1, pontoTur1);
            printf("%s: %d\n", nomeCidade2, pontoTur2);
            if (pontoTur1 > pontoTur2) {
                printf("A cidade %s tem mais pontos turísticos e venceu!\n", nomeCidade1);
            } else if (pontoTur1 < pontoTur2) {
                printf("A cidade %s tem mais pontos turísticos e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 5:
            printf("### %s contra %s no atributo Densidade Populacional! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %.2f\n", nomeCidade1, densPop1);
            printf("%s: %.2f\n", nomeCidade2, densPop2);
            if (densPop1 < densPop2) {
                printf("A cidade %s tem menor densidade populacional e venceu!\n", nomeCidade1);
            } else if (densPop1 > densPop2) {
                printf("A cidade %s tem menor densidade populacional e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 6:
            printf("### %s contra %s no atributo PIB per Capita! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %.2f\n", nomeCidade1, pibCap1);
            printf("%s: %.2f\n", nomeCidade2, pibCap2);
            if (pibCap1 > pibCap2) {
                printf("A cidade %s tem maior PIB per Capita e venceu!\n", nomeCidade1);
            } else if (pibCap1 < pibCap2) {
                printf("A cidade %s tem maior PIB per Capita e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 7:
            printf("### %s contra %s no atributo Super Poder! ###\n", nomeCidade1, nomeCidade2);
            printf("%s: %.2f\n", nomeCidade1, superPoder1);
            printf("%s: %.2f\n", nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("A cidade %s tem maior Super Poder e venceu!\n", nomeCidade1);
            } else if (superPoder1 < superPoder2) {
                printf("A cidade %s tem maior Super Poder e venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        default:
            printf("Opção inválida!");
        break;
    }
    return 0;
}
