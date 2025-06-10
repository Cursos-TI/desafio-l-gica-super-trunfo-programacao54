#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1,area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite as informações da Carta 1:\n");
    printf("Digite uma cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a população:\n");
    scanf("%f", &populacao1);
    printf("Digite a área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f",&pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    printf("Digite as informações da Carta 2:\n");
    printf("Digite outra cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if(populacao1 > populacao2) {
        printf("Cidade 1 tem população maior.\n");
    } else {
        printf("Cidade 2 tem população maior.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
