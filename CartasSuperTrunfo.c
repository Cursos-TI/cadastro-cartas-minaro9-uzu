#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // VARIAVEIS DA CARTA 1
    char Estado1;
    char CodigoCarta1[4];
    char NomeCidade1[50];
    int População1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // VARIAVEIS DA CARTA 2
    char Estado2 = 'P';
    char Codigocarta2[4];
    char NomeCidade2[50];
    int População2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

  // Área para entrada de dados
  //leitura de dados da carta 1
    printf("===cadastro carta 1===");
    printf("estado (a-h):");
    scanf("%c", &estado1);

    printf("codigo da carta(ex:Ao1):");
    scanf("%s", codigo1);

    printf("nome da cidade1:");
    scanf("%s", NomeCidade1);

    printf("população");
    scanf("%d", &População1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    
  // Área para exibição dos dados da cidade

return 0;
} 
