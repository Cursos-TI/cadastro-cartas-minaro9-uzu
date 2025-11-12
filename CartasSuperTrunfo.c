#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta1
  char Estado1;
  char CodigoCarta[4];
  char NomeCidade1[30];
  int Populacao1,PontosTuristicos1;
  float Area1,Pib1;

  //carta2
  char Estado2;
  char CodigoCarta2;
  char NomeCidade2[30];
  int Populacao2,PontosTuristicos2;
  float Area2,Pib2;
  // Área para entrada de dado
  //leitura da carta 1
  printf("===cadastro carta 1===\n");

  printf("Estado (A-h):");
  scanf(" %c", &Estado1);

  printf("Codigo da Carta1:");
  scanf(" %4s", CodigoCarta);
  
  printf("NomeCidade1:");
  scanf("%30s", NomeCidade1);

  printf("Populacao1:");
  scanf("%d", &Populacao1);

  printf("Area (Km2):");
  scanf("%f", &Area1);
  
  printf("PIB1 (em bilhões de reais): ");
  scanf("%f", &Pib1);

  printf("Número de Pontos Turísticos1: ");
  scanf("%d", &PontosTuristicos1);

  printf("\n");

  //Leitura cartas 2

 // Entrada da segunda carta
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (letra): ");
    scanf(" %c", &Estado2);

    printf("Codigo da carta 2: ");
    scanf(" %4s", CodigoCarta2);

    printf("NomeCidade2: ");
    scanf("%30s", NomeCidade2);

    printf("População2: ");
    scanf("%d", &Populacao2);

    printf("Area2 (km²): ");
    scanf("%f", &Area2);

    printf("Pib2 (em bilhões de reais): ");
    scanf("%f", &Pib2);

    printf("Número de Pontos Turísticos2: ");
    scanf("%d", &PontosTuristicos2);
    





  // Área para exibição dos dados da cidade

return 0;
} 
