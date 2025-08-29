#include <stdio.h>

int main(){
printf("Super Trunfo Novato \n");

// carta 1

char Estado1;
char Codigo1 [0];
char NomeCidade1 [0];
int Populacao1;
float Area1;
float Pib1;
int PontosTuristicos1;

// carta 2
char Estado2;
char Codigo2 [0];
char NomeCidade2 [0];
int Populacao2;
float Area2;
float Pib2;
int PontosTuristicos2;

// leitura - carta 1
printf("cadastro carta 1: \n");

printf("Estado (A-H): ");
scanf("%c", &Estado1);

printf("Codigo da carta (ex:A01): ");
scanf("%s", Codigo1);

printf("Nome da Cidade: ");
scanf("%[^\n]s", NomeCidade1);

printf("População: ");
scanf("%d", &Populacao1);

printf("Área (em KM²): ");
scanf("%f", &Area1);

printf("PIB (em bilhões): ");
scanf("%f", &Pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &PontosTuristicos1);


// leitura - carta 2
printf("\n Cadastro da Carta 2:\n");

printf("Estado (A-H)");
scanf("%c", &Estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", &Codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]s", &NomeCidade2);

printf("População: ");
scanf("%d", &Populacao2);

printf("Área (em km²): ");
scanf("%f", &Area2);

printf("PIB (em bilhões): ");
scanf("%f", &Pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &PontosTuristicos2);

// Exibição - Carta 1
printf("\nCarta 1:\n");
printf("Estado: A%c\n", Estado1);
printf("Código: A01%s\n", Codigo1);
printf("Nome da Cidade: São Paulo %s\n", NomeCidade1);
printf("População: 1232500%d\n", Populacao1);
printf("Área: 1521.11%.f km²\n", Area1);
printf("PIB: 699.28%.f bilhões de reais\n", Pib1);
printf("Número de Pontos Turísticos: 5%d\n", PontosTuristicos1);

// Exibição - Carta 2
printf("\nCarta 2:\n");
printf("Estado: B%c\n", Estado2);
printf("Código: B02%s\n", Codigo2);
printf("Nome da Cidade: Rio de Janeiro%s\n", NomeCidade2);
printf("População: 6748000%d\n", Populacao2);
printf("Área: 1200.25%.2f km²\n", Area2);
printf("Número de Pontos Turísticos: 3%d\n", PontosTuristicos2);






return 0;

}