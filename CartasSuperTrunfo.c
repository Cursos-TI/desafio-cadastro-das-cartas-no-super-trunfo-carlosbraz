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
    int populacao1, Pturisticos1;
    float area1, PIB1;
    char Estado1;
    char cidade1[20];

    //dados da segunda cidade
    int populacao2, Pturisticos2;
    float area2, PIB2;
    char Estado2;
    char cidade2[20];

    printf("Cadastro de Cartas do Jogo Super Trunfo \n");
    printf("Digite o estado da Primeira carta: \n");
    scanf("%c", &Estado1);
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
    
    return 0;
}