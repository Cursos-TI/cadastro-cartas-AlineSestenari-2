#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   int carta = 1, Carta =2, populacao1, populacao2, pontos1, pontos2;
   float area1, area2, PIB1, PIB2;
   char estado1, estado2;
   char cidade1[30], cidade2[30];

  // Área para entrada de dados

// Cadastro de dados da carta 1

       printf("Carta: %d\n", carta);

       printf("Digite a sigla do estado: ");
       scanf(" %c", &estado1);

       printf("\nDigite o nome da cidade: ");
       scanf("%s", cidade1);

       printf("\nDigite a população: ");
       scanf("%d", &populacao1);

       printf("\nDigite a área: ");
       scanf("%f", &area1);

       printf("\nDigite o PIB: ");
       scanf("%f", &PIB1);

       printf("\nDigite o número de pontos turísticos: ");
       scanf("%d", &pontos1);
       printf("\n");

                // Cadastro de dados da carta 2

                   printf("\nCarta: %d", Carta);

                   printf("\nDigite a sigla do estado: ");
                   scanf(" %c", &estado2);

                   printf("\nDigite o nome da cidade: ");
                   scanf("%s", cidade2);

                   printf("\nDigite a população: ");
                   scanf("%d", &populacao2);

                   printf("\nDigite a área: ");
                   scanf("%f", &area2);

                   printf("\nDigite o PIB: ");
                   scanf("%f", &PIB2);

                   printf("\nDigite o número de pontos turísticos ");
                   scanf("%d", &pontos2);
                   printf("\n");

  // Área para exibição dos dados da cidade

                        // Carta 1

                         printf("Carta: %d\n", carta);
                         printf("Estado: %c\n", estado1);
                         printf("Código: %c0%d\n", estado1, carta);
                         printf("Cidade: %s\n", cidade1);
                         printf("População: %d\n", populacao1);
                         printf("Área: %2.f km2\n", area1);
                         printf("PIB: %2.f bilhões de reais\n", PIB1);
                         printf("Pontos turísticos: %d\n", pontos1);
                         printf("\n");

                        // Carta 2

                            printf("Carta: %d\n", Carta);
                            printf("Estado: %c\n", estado2);
                            printf("Código: %c0%d\n", estado2, Carta);
                            printf("Cidade: %s\n", cidade2);
                            printf("População: %d\n", populacao2);
                            printf("Área: %2.f km2\n", area2);
                            printf("PIB: %2.f bilhões de reais\n", PIB2);
                            printf("Pontos turísticos: %d\n", pontos2);

return 0;
} 
