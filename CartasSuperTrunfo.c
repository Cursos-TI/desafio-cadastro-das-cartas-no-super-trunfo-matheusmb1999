#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
        //Variáveis separadas para cada atributo da cidade
        char estado, estado2; //Uma letra de 'A' a 'H' representando um dos oito estados
        char codigo[50], codigo2[50]; //A letra do estado seguida de um número de 01 a 04
        char cidade[50], cidade2[50]; //Nome da cidade sem acentos
        int populacao, populacao2; //População sem casas decimais
        float area, area2; //Área em km² deve ser preenchido com no máximo duas casas decimais
        float pib, pib2; //PIB deve ser preenchido com no máximo duas casas decimais
        int pontos, pontos2; //Número de pontos turísticos
    
        //Primeiro será solicitado que seja preenchido os dados, o retorno das duas cartas será no final
        printf("Carta A01: \n");
        printf("Digite a letra do estado (De A a H): ");
        scanf(" %c", &estado); //É preciso colocar um espaço antes do %c, apenas para ler caractere
    
        printf("Digite o Código da carta (Letra + Número de 01 a 04): ");
        scanf("%s", codigo);
    
        printf("Digite o nome da cidade: ");
        scanf("%s", cidade);
    
        printf("Digite a população: ");
        scanf("%d", &populacao);
    
        printf("Digite a área (em km²): ");
        scanf("%f", &area);
    
        printf("Digite o PIB: ");
        scanf("%f", &pib);
    
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos);
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
    
        //Abaixo se inicia a impressão das duas cartas
        printf("------------------------------------------\n");
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f", area);
        printf(" km²\n");
        printf("PIB: %.2f", pib);
        printf(" bilhões de reais\n");
        printf("Número de Pontos Turísticos: %d\n", pontos);
        printf("\n");
    
        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f", area2);
        printf(" km²\n");
        printf("PIB: %.2f", pib2);
        printf(" bilhões de reais\n");
        printf("Número de Pontos Turísticos: %d\n", pontos2);    

    return 0;
}
