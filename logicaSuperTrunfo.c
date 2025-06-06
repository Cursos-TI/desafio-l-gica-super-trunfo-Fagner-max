#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // return 0;
//}
int main() {
    // --- Declaração de variáveis para a Carta 1 ---
    char estado1;
    char codigo1[5]; // 4 caracteres para o código (ex: A01) + 1 para o terminador nulo '\0'
    char nomeCidade1[50]; // Suporta nomes de cidades de até 49 caracteres + terminador nulo
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1; // Variável para a densidade populacional da Carta 1
    float pibPerCapita1;         // Variável para o PIB per capita da Carta 1

    // --- Declaração de variáveis para a Carta 2 ---
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2; // Variável para a densidade populacional da Carta 2
    float pibPerCapita2;         // Variável para o PIB per capita da Carta 2

    // --- Coleta de dados para a Carta 1 ---
    printf("--- Inserir dados para a Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é importante para consumir qualquer caractere de nova linha pendente

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1); // %s lê uma string até encontrar um espaço em branco

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada antes de ler a string com espaços, caso a entrada anterior tenha deixado um '\n'
    // Embora %c com espaço ajude, para %s e %[^\n], pode ser útil garantir.
    // No entanto, para simplicidade e seguindo as restrições, confiaremos no ' %[^\n]' para o nome da cidade
    scanf(" %[^\n]", nomeCidade1); // %[^\n] lê a linha inteira até a quebra de linha, incluindo espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km^2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Calculos para a Carta 1 ---
    // Garante que 'area1' não é zero para evitar divisão por zero; se for zero, a densidade será 0.0
    densidadePopulacional1 = (area1 != 0.0) ? (float)populacao1 / area1 : 0.0;
    // Garante que 'populacao1' não é zero para evitar divisão por zero; se for zero, o PIB per capita será 0.0
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1000000000.0) / populacao1 : 0.0;

    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade entre as entradas das cartas

    // --- Coleta de dados para a Carta 2 ---
    printf("--- Inserir dados para a Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km^2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculos para a Carta 2 ---
    // Garante que 'area2' não é zero para evitar divisão por zero; se for zero, a densidade será 0.0
    densidadePopulacional2 = (area2 != 0.0) ? (float)populacao2 / area2 : 0.0;
    // Garante que 'populacao2' não é zero para evitar divisão por zero; se for zero, o PIB per capita será 0.0
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1000000000.0) / populacao2 : 0.0;

    printf("\n"); // Adiciona uma linha em branco antes de exibir os resultados

    // --- Exibição dos dados da Carta 1 ---
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f formata o float com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n"); // Adiciona uma linha em branco para separar a exibição das cartas

    // --- Exibição dos dados da Carta 2 ---
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n"); // Adiciona uma linha em branco antes da comparação

    // --- Lógica de Comparação ---
    // Atributo escolhido para comparação: População (a carta com maior população vence)
    printf("--- Comparação de Cartas (Atributo: População) ---\n");

    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n"); // Se as populações forem iguais
    }

    return 0; // Indica que o programa foi executado com sucesso
}