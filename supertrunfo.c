#include <stdio.h>

    int main() {
  //Variaveis carta 1//

  char estado1[4];
  char codigo1[4];
  char cidade1[40];
  float area1;
  float pib1;
  float densidade1;
  float pibpercapta1;
  float superpoder1;
  int pontosturisticos1;
  unsigned long int populacao1;
  
  
 
  // variareis carta 2//

  char estado2[4];
  char codigo2[4];
  char cidade2[40];
  float area2;
  float pib2;
  float densidade2;
  float superpoder2;
  float pibpercapta2;
  int pontosturisticos2;
  unsigned long int populacao2;

  //cadastro 1 carta//

      printf("\n===Cadastro 1 carta===\n");

      printf("estado (A-H): ");
      scanf("%s", estado1);

      printf("codigo da carta (ex:A01): ");
      scanf(" %s", codigo1);

      printf("cidade: ");
      scanf(" %[^\n]", cidade1);

      printf("populacao: ");
      scanf("%lu", &populacao1);

      printf("area (km2): ");
      scanf("%f", &area1);

      printf("pib (em bilhoes): ");
      scanf("%f", &pib1);

      printf("pontos turisticos: ");
      scanf("%d", &pontosturisticos1);

      // - calculo densidade populacional 1 - //

      densidade1 = (float) populacao1 / area1;
      pibpercapta1 = (pib1 * 1000000000) / populacao1;

                 

    // cadastro 2 carta//
      
      printf("\n===cadastro 2 carta===\n");

      printf("estado (A-H): ");
      scanf("%s", estado2);

      printf("codigo da carta (ex:A01): ");
      scanf(" %s", codigo2);

      printf("cidade: ");
      scanf(" %[^\n]", cidade2);

      printf("populacao: ");
      scanf("%lu", &populacao2);

      printf("area (km2): ");
      scanf("%f", &area2);

      printf("pib (em bilhoes): ");
      scanf("%f", &pib2);

      printf("pontos turisticos: ");
      scanf("%d", &pontosturisticos2);

      // - calculo densidade populacional - //

      densidade2 = (float) populacao2 / area2;
      pibpercapta2 = (pib2 * 1000000000) / populacao2;

      
      // - Calculo super poder carta 1 - //


      superpoder1 = (float) populacao1 + area1 + pib1 +pontosturisticos1 + pibpercapta1 + (1 / densidade1);
      superpoder2 = (float) populacao2 + area2 + pib2 +pontosturisticos2 + pibpercapta2 + (1 / densidade2);


   
     // exibição dos dados das cartas//

      printf("\n===Carta 1===\n");
      printf("Estado: %s\n", estado1);
      printf("codigo: %s\n", codigo1);
      printf("cidade: %s\n", cidade1);
      printf("populacao: %lu\n", populacao1);
      printf("area: %.2f km²\n", area1);
      printf("pib: %.2f bilhoes de reais\n", pib1);
      printf("pontos turisticos: %d\n", pontosturisticos1);
      printf("densidade populacional: %.2f(hab/area) \n", densidade1);
      printf("Pib per captita: %.2f reais \n", pibpercapta1);
      
      printf("\n---------------------\n\n");
      
      printf("\n===Carta 2===\n");
      printf("Estado: %s\n", estado2);
      printf("codigo: %s\n", codigo2);
      printf("cidade: %s\n", cidade2);
      printf("populacao: %lu\n", populacao2);
      printf("area: %.2f(km2)\n", area2);
      printf("pib: %.2f bilhoes de reais\n", pib2);
      printf("pontos turisticos: %d\n", pontosturisticos2);
      printf("densidade populacional: %.2f(hab/area) \n", densidade2);
      printf("Pib per capita: %.2f reais \n", pibpercapta2);


      printf("\n====Resultado Final===\n\n");



      // - Comparacao das cartas - //

      printf("Populacao: A carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
      printf("area: A carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
      printf("Pib: A carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
      printf("Pontos turisticos: A carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2, pontosturisticos1 > pontosturisticos2);
      printf("Pibpercapita: A carta %d venceu (%d)\n", (pibpercapta1 > pibpercapta2)? 1 : 2, pibpercapta1 > pibpercapta2);
      printf("densidade: A carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);
      printf("Super poder: A carta %d venceu (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, superpoder1 > superpoder2);

      return 0;

    }
      