#include <stdio.h>

int main(){
    //Variáveis separadas para cada atributo da cidade
    char estado1, estado2; //Uma letra de 'A' a 'H' representando um dos oito estados
    char codigo1[50], codigo2[50]; //A letra do estado seguida de um número de 01 a 04
    char cidade1[50], cidade2[50]; //Nome da cidade (sem acentos)
    int populacao1, populacao2; //População sem casas decimais
    float area1, area2; //Área em km²
    float pib1, pib2; //PIB (bilhões)
    int pontos1, pontos2; //Número de pontos turísticos
    float densidade1, densidade2; //Densidade Populacional
    float pibper1, pibper2; //PIB per capita

    //Primeiro será solicitado que seja preenchido os dados, o retorno das duas cartas será no final
    printf("Carta A01: \n");
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado1); //É preciso colocar um espaço antes do %c, apenas para ler caractere

    printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    printf("Carta B01: \n"); //Aqui inicia o preenchimento dos dados da segunda carta
    printf("Digite a letra do estado (De A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    printf("\n");

    //Cálculo das variáveis Densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    pibper1 = (float)pib1 / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    //Abaixo se inicia a impressão das duas cartas
    printf("------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); //%.2f Imprime o número limitando em duas casas após a vírgula
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);

    return 0;
}