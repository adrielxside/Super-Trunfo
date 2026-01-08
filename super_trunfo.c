#include <stdio.h>

int main(){

    char estado1, estado2, cidade1[50], cidade2[50], codigo1[10], codigo2[10];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2, carta1, carta2;
    float area1, pib1, area2, pib2;

    //cadastro da carta 01

    printf("Realizando o cadastro da Carta 01\n");
    printf("Informe o número da carta:\n");
    scanf("%i", &carta1);

    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado1);

    printf("Informe o Código da carta:\n");
    scanf("%s", &codigo1);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Informe o número da população:\n");
    scanf("%i", &populacao1);

    printf("Informe a área em km²:\n");
    scanf("%f", &area1);

    printf("Informe o PIB em bilhões de reais:\n");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontosTuristicos1);

    printf("----------\n");

    //cadastro da carta 01

    printf("Realizando o cadastro da Carta 02\n");
    printf("Informe o número da carta:\n");
    scanf("%i", &carta2);

    printf("Informe o Estado (de A a H):\n");
    scanf(" %c", &estado2);

    printf("Informe o Código da carta:\n");
    scanf("%s", &codigo2);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Informe o número da população:\n");
    scanf("%i", &populacao2);

    printf("Informe a área em km²:\n");
    scanf("%f", &area2);

    printf("Informe o PIB em bilhões de reais:\n");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontosTuristicos2);

    printf("----------\n");

    //impressões das cartas

    printf("Carta: %i\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %i\n", pontosTuristicos1);
    printf("\n");

    printf("----------\n");

    printf("Carta: %i\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %i\n", pontosTuristicos2);
    printf("\n");

    printf("----------\n");

    return 0;

}
