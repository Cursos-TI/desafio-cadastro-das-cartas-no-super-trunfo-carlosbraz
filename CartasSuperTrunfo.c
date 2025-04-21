#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.
#include <stdio.h>

int main() {
    //dados da primeira cidade
    int Pturisticos1;
    float populacao1, area1, PIB1;
    float PIBperCap1, DensPop1;
    char Estado1;
    char cidade1[20];
    char CodCarta1[20];

    //dados da segunda cidade
    int Pturisticos2;
    float populacao2, area2, PIB2;
    float PIBperCap2, DensPop2;
    char Estado2;
    char cidade2[20];
    char CodCarta2[20];

    printf("Cadastro de Cartas do Jogo Super Trunfo \n");
    //inicio da entrada de dados da primeira carta
    printf("Digite o estado da Primeira carta: \n");
    scanf("%c", &Estado1);
    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &CodCarta1);
    printf("Digite a cidade da primeira carta: \n");
    scanf("%s", &cidade1);
    printf("Digite a area em metros quadrados da primeira cidade: \n");
    scanf("%f", &area1);
    printf("Digite a populacao da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &Pturisticos1);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);
    DensPop1=populacao1/area1; //calculo da densidade populacional
    PIBperCap1=PIB1/populacao1; //calculo do PIB per capta


    //inicio da entrada de dados da segunda carta
    printf("Digite o estado da segunda carta: \n");
    scanf("%c", &Estado2);
    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &CodCarta2);
    printf("Digite a cidade da segunda carta: \n");
    scanf("%s", &cidade2);
    printf("Digite a area em metros quadrados da segunda cidade: \n");
    scanf("%f", &area2);
    printf("Digite a populacao da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &Pturisticos2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);
    DensPop2=populacao2/area2; //calculo da densidade populacional
    PIBperCap2=PIB2/populacao2; //calculo do PIB per capta 


    //saida de dados armazenados da primeira carta
    printf("o estado da Primeira carta: %c\n", Estado1);
    printf("o codigo da primeira carta: %s\n", CodCarta1);
    printf("a cidade da primeira carta: %s\n", cidade1);
    printf("area em metros quadrados da primeira cidade: %f\n", area1);
    printf("populacao da primeira cidade: %d\n", populacao1);
    printf("quantidade de pontos turisticos da primeira cidade: %d\n", Pturisticos1);
    printf("PIB da primeira cidade: %f\n", PIB1);
    printf("PIB per capta da primeira cidade: %f RS/por pessoa em media\n", PIBperCap1);
    printf("Densidade populacional da primeira cidade: %f hab/km\n", DensPop1);

    //saida de dados armazenados da segunda carta
    printf("o estado da segunda carta: %c\n", Estado2);
    printf("o codigo da segunda carta: %s\n", CodCarta2);
    printf("a cidade da segunda carta: %s\n", cidade2);
    printf("area em metros quadrados da segunda cidade: %f\n", area2);
    printf("populacao da segunda cidade: %d\n", populacao2);
    printf("quantidade de pontos turisticos da segunda cidade: %d\n", Pturisticos2);
    printf("PIB da segunda cidade: %f\n", PIB2);
    printf("PIB per capta da segunda cidade: %f RS/por pessoa em media\n", PIBperCap2);
    printf("Densidade populacional da segunda cidade: %f hab/km\n", DensPop2);
   
   
    return 0;
}