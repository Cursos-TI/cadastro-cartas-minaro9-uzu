#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // VARIAVEIS DA CARTA 1
    char Estado1;
    char Codigo1[4];
    char NomeCidade1[20];
    int População1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // VARIAVEIS DA CARTA 2
    char Estado2;
    char Codigo2[4];
    char NomeCidade2[20];
    int População2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

  // Área para entrada de dados
  //leitura de dados da carta 1
    printf("===cadastro carta 1===\n");
    printf("estado (a-h):");
    scanf("%c", &Estado1);

    printf("codigo da carta(ex:Ao1):");
    scanf("%s", &Codigo1);

    printf("nome da cidade1:");
    scanf("%s", &NomeCidade1);

    printf("população");
    scanf("%d", &População1);

    printf("Area (em km²): ");
    scanf("%f", &Area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &Pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);


    
  // Área para exibição dos dados da cidade

return 0;
} 
