#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta1
  char Estado1;
  char Codigo1[9];
  char NomeCidade1[30];
  int Populacao1,PontosTuristicos1;
  float Area1,Pib1;

  //carta2
  char Estado2;
  char Codigo2;
  char NomeCidade2[30];
  int Populacao2,PontosTuristicos2;
  float Area2,Pib2;
  // Área para entrada de dado
  //leitura da carta 1
  printf("===cadastro carta 1===\n");

  printf("Estado (A-h):");
  scanf(" %c", &Estado1);

  printf("Codigo da Carta1:");
  scanf("%9s", Codigo1);
  
  printf("NomeCidade1:");
  scanf("%s", &NomeCidade1);


  // Área para exibição dos dados da cidade

return 0;
} 
