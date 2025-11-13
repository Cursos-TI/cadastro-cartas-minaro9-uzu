#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta1
  char Estado1;
  char Codigo1[4];
  char Cidade1[30];
  int Populacao1,PontosTuristicos1;
  float Area1,Pib1;

  //carta2
  char Estado2;
  char Codigo2[4];
  char Cidade2[30];
  int Populacao2,PontosTuristicos2;
  float Area2,Pib2;
  // Área para entrada de dado
  //leitura da carta 1
  printf("===cadastro carta 1===\n");

  printf("Estado (A-h):");
  scanf(" %c", &Estado1);

  printf("Codigo da Carta1:");
  scanf(" %4s", Codigo1);
  
  printf("NomeCidade1:");
  scanf("%30s", Cidade1);

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
    scanf(" %4s", Codigo2);

    printf("NomeCidade2: ");
    scanf(" %30s", Cidade2);

    printf("População2: ");
    scanf("%d", &Populacao2);

    printf("Area2 (km²): ");
    scanf("%f", &Area2);

    printf("Pib2 (em bilhões de reais): ");
    scanf("%f", &Pib2);

    printf("Número de Pontos Turísticos2: ");
    scanf("%d", &PontosTuristicos2);
    

// Área para exibição dos dados da cidade
       printf("\n=== CARTAS CADASTRADAS ===\n\n");

// Mostrar carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n\n", PontosTuristicos1);

// Mostrar carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
 


return 0;
} 
