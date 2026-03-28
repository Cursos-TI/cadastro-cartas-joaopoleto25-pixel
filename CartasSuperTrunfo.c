#include <stdio.h>
int main() {

    // --- definição das variaveis (CARTAS 1)

  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

      // --- definição das variaveis (CARTAS 2)

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

      // --- Cadastro da carta (CARTAS 1)

  printf("Cadastro da carta 1 ");

  printf("Estado A: ");
  scanf(" %c", &estado1);

  printf("codigo A01: ");
  scanf(" %s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);
  
  printf("Popolacao: ");
  scanf(" %d", &populacao1);

  printf("Area (km2): ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontos1);

  printf("\n");

  printf("Cadastro da carta 2 \n");

  printf("Estado B: ");
  scanf(" %c", &estado2);

  printf("codigo B02: ");
  scanf(" %s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);
  
  printf("Populacao: ");
  scanf(" %d", &populacao2);

  printf("Area (km2): ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontos2);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
