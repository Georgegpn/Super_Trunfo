
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
// Definir o idioma para evitar problemas com acentuação
setlocale(LC_ALL, "Portuguese");

// Definindo as variáveis para as duas cartas
char estado1, estado2;
char codigo1[4], codigo2[4];
char nomeCidade1[50], nomeCidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosTuristicos1, pontosTuristicos2;
float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

// Entrada de dados da Carta 1
printf("Digite as informações da Carta 1:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);
printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);
getchar();  // Limpar o buffer do teclado
printf("Nome da Cidade: ");
fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;  // Remover o caractere de nova linha
printf("População: ");
scanf("%d", &populacao1);
printf("Área (em km²): ");
scanf("%f", &area1);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

// Cálculo das propriedades
densidade1 = populacao1 / area1;
pibPerCapita1 = pib1 / populacao1;

// Entrada de dados da Carta 2
printf("\nDigite as informações da Carta 2:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);
getchar();  // Limpar o buffer do teclado
printf("Nome da Cidade: ");
fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  // Remover o caractere de nova linha
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Cálculo das propriedades
densidade2 = populacao2 / area2;
pibPerCapita2 = pib2 / populacao2;

// Exibindo as informações da Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f milhões de reais\n", pibPerCapita1);

// Exibindo as informações da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f milhões de reais\n", pibPerCapita2);

return 0; 
}