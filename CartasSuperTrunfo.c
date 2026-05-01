#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   int carta = 1, Carta =2, pontos1, pontos2;
   unsigned long int populacao1, populacao2;
   float area1, area2, PIB1, PIB2, densidade1, densidade2, percapita1, percapita2, superPoder1, superPoder2;
   char estado1, estado2;
   char cidade1[50], cidade2[50];

  // Área para entrada de dados

// Cadastro de dados da carta 1

       printf("Carta: %d\n", carta);

       printf("Digite a sigla do estado: ");
       scanf(" %c", &estado1);

       printf("\nDigite o nome da cidade: ");
       scanf("%s", cidade1);

       printf("\nDigite a população: ");
       scanf("%lu", &populacao1);

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
                   scanf("%lu", &populacao2);

                   printf("\nDigite a área: ");
                   scanf("%f", &area2);

                   printf("\nDigite o PIB: ");
                   scanf("%f", &PIB2);

                   printf("\nDigite o número de pontos turísticos ");
                   scanf("%d", &pontos2);
                   printf("\n");

                   // Cálculos carta 1

                    densidade1 = (float)(populacao1 / area1);
                    percapita1 = (float)(PIB1 * 1000000000 / populacao1);
                    superPoder1 = (float)populacao1 + area1 + PIB1 + pontos1 + percapita1 + (1 / densidade1);



                   // Cálculos carta 2

                    densidade2 = (float)populacao2 / area2;
                    percapita2 = (float)PIB2 * 1000000000 / populacao2;
                    superPoder2 = (float)populacao2 + area2 + PIB2 + pontos2 + percapita2 + (1 / densidade2);

  // Área para exibição dos dados da cidade

                        // Carta 1

                         printf("Carta: %d\n", carta);
                         printf("Estado: %c\n", estado1);
                         printf("Código: %c0%d\n", estado1, carta);
                         printf("Cidade: %s\n", cidade1);
                         printf("População: %lu\n", populacao1);
                         printf("Área: %.2f km2\n", area1);
                         printf("PIB: %.2f bilhões de reais\n", PIB1);
                         printf("Pontos turísticos: %d\n", pontos1);
                         printf("Densidade populacional: %.2f hab/km²\n", densidade1);
                         printf("PIB per Capita: %.2f reais", percapita1);
                         printf("Super poder: %.2f\n", superPoder1);
                         printf("\n");

                        // Carta 2

                            printf("Carta: %d\n", Carta);
                            printf("Estado: %c\n", estado2);
                            printf("Código: %c0%d\n", estado2, Carta);
                            printf("Cidade: %s\n", cidade2);
                            printf("População: %lu\n", populacao2);
                            printf("Área: %.2f km2\n", area2);
                            printf("PIB: %.2f bilhões de reais\n", PIB2);
                            printf("Pontos turísticos: %d\n", pontos2);
                            printf("Densidade populacional: %.2f hab/km²\n", densidade2);
                            printf("PIB per Capita: %.2f reais", percapita2);
                            printf("Super poder: %.2f\n", superPoder2);
                            printf("\n");

                            // Comparação de cartas

                            printf("*** COMPARAÇÃO DE CARTAS ***\n");
                            printf("A População da carta 1 (%lu) é maior que a população da carta 2 (%lu)? %d\n", populacao1, populacao2,(populacao1 > populacao2));
                            printf("A Área da carta 1 (%.2f) é maior que a Área da carta 2 (%.2f)? %d\n", area1, area2,(area1 > area2));
                            printf("O PIB da carta 1 (%.2f) é maior que o PIB da carta 2 (%.2f)? %d\n", PIB1, PIB2,(PIB1 > PIB2));
                            printf("A Densidade populacional da carta 1 (%.2f) é maior que a densidade populacional da carta 2 (%.2f)? %d\n", densidade1, densidade2,(densidade1 > densidade2));
                            printf("O PIB per Capita da carta 1 (%.2f) é maior que o PIB per Capita da carta 2 (%.2f)? %d\n", percapita1, percapita2,(percapita1 > percapita2));
                            printf("O Super poder da carta 1 (%.2f) é maior que o super poder da carta 2 (%.2f)? %d\n", superPoder1, superPoder2,(superPoder1 > superPoder2));



return 0;
} 
