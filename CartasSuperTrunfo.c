#include <stdio.h>

int main(){

    char codigo[5];
    char cidade[50];
    int populacao, pontosTuristicos;
    float area;
    double pib;

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n===== CARTA CADASTRADA =====\n");

    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
