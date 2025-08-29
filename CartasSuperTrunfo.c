#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        //Carta1
    char  estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1; 
    float area1;
    float pib1;
    int pontos1;

    //Carta2
    char  estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2; 
    float area2;
    float pib2;
    int pontos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n ");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da Carta:" );
    scanf("%s", codigo1);

    printf("Cidade:" );
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

//Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Codigo: ");
    scanf(" %s", codigo2);

    printf("Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição das cartas
    printf("Dados da primeira carta:\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);


    printf("Dados da segunda carta:\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    
    // Batalha das cartas
// Calcular Super Poder de cada carta
float super1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpcapta1 + (1.0 / denspopu1);
float super2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpcapta2 + (1.0 / denspopu2);

// Comparações usando apenas operadores relacionais
printf("\nComparacao de Cartas:\n");

printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Populacao: Carta 2 venceu (%d)\n", populacao2 > populacao1);

printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
printf("Area: Carta 2 venceu (%d)\n", area2 > area1);

printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
printf("PIB: Carta 2 venceu (%d)\n", pib2 > pib1);

printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
printf("Pontos Turisticos: Carta 2 venceu (%d)\n", pontos2 > pontos1);

// Densidade populacional - menor vence
printf("Densidade Populacional: Carta 1 venceu (%d)\n", denspopu1 < denspopu2);
printf("Densidade Populacional: Carta 2 venceu (%d)\n", denspopu2 < denspopu1);

printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpcapta1 > pibpcapta2);
printf("PIB per Capita: Carta 2 venceu (%d)\n", pibpcapta2 > pibpcapta1);

printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);
printf("Super Poder: Carta 2 venceu (%d)\n", super2 > super1);

    return 0;
}
