#include <stdio.h>
    int main() {
     //criando um jogo baseado em super trunfo
    
    char estado1, estado2;
    char codcarta1[03], codcarta2[03];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pturistico1, pturistico2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float SuperPoder1, SuperPoder2;
    
    //Entrada de dados para Carta 1:
    printf("Digite as informações sobre a Carta 1\n");
    
    printf("Digite a letra correspondente ao estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta1);
    
    printf("Digite a cidade da carta: ");
    scanf("%s", cidade1);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a area da cidade: ");
    scanf("%f", &areakm1);
    
    printf("Digite o Pib da cidade: ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturistico1);
    
    //entrada de dados para carta 2:
    printf("\nDigite as informações sobre a Carta 2\n");
    
    printf("Digite a letra correspondente ao estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta2);
    
    printf("Digite a cidade da carta: ");
    scanf("%s", cidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a area da cidade: ");
    scanf("%f", &areakm2);
    
    printf("Digite o Pib da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturistico2);
    
    //Calculando a Densidade Demografica:
    densidade1 = (float) populacao1 / areakm1;
    densidade2 = (float) populacao2 / areakm2;
    
    //Calculando o Pib Per Capita:
    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;
    
    //Calculando o Super Poder
    SuperPoder1 = populacao1 + areakm1 + pib1 + pturistico1 + pibpc1 + (1 / densidade1); // 1/densidade pois isso inverte o valor, pois quando maior for o numero da densidade menor será o resultado desse calculo.
    SuperPoder2 = populacao2 + areakm2 + pib2 + pturistico2 + pibpc2 + (1 / densidade2); // seguindo a mesma logica.
    

    //Saída Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area em Km²: %.2f\n", areakm1);
    printf("Pib: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pturistico1);
    printf("Densidade Demografica: %.2f\n", densidade1);
    printf("Pib Per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %.3f\n", SuperPoder1);
    
    //Saída Carta 2: 
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area em Km²: %.2f\n", areakm2);
    printf("Pib: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pturistico2);
    printf("Densidade Demografica: %.2f\n", densidade2);
    printf("Pib Per Capita: %.2f\n", pibpc2);
    printf("Super Poder: %.3f\n", SuperPoder2);
    
    //MENU INTERATIVO
    int opcao;

    printf("\nDigite qual atributo levar à batalha: \n");
    printf("1: População\n");
    printf("2: Area em Km²\n");
    printf("3: Pib\n");
    printf("4: Pontos Turisticos\n");
    printf("5: Densidade Demografica\n");
    printf("6: Pib Per Capita\n");
    printf("7: Super Poder\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("População:\n");
        printf("Carta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        if (populacao1 > populacao2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 2: 
        printf("Area em Km²:\n");
        printf("Carta 1: %.2f\n", areakm1);
        printf("Carta 2: %.2f\n", areakm2);
        if (areakm1 > areakm2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 3:
        printf("Pib:\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        if (pib1 > pib2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 4: 
        printf("Pontos Turisticos: \n");
        printf("Carta 1: %d\n", pturistico1);
        printf("Carta 2: %d\n", pturistico2);
        if (pturistico1 > pturistico2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 5:
        printf("Densidade Demografica\n");
        printf("Carta 1: %.2f\n", densidade1);
        printf("Carta 2: %.2f\n", densidade2);
        if (densidade1 > densidade2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 6: 
        printf("Pib Per Capita:\n");
        printf("Carta 1: %.2f\n", pibpc1);
        printf("Carta 2: %.2f\n", pibpc2);
        if (pibpc1 > pibpc2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        case 7: 
        printf("Super Poder\n");
        printf("Carta 1: %.3f\n", SuperPoder1);
        printf("Carta 2: %.3f\n", SuperPoder2);
        if (SuperPoder1 > SuperPoder2) {
            printf("Carta 1 venceu Carta 2\n");
        } else {
            printf("Carta 2 venceu Carta 1\n");
        }
        break;
        default:
        printf("Digite uma opção valida");
    }

    }