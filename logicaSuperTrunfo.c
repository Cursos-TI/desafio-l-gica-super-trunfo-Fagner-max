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
// Definindo constantes para as opções do menu para melhorar a legibilidade
#define COMPARAR_POPULACAO 1
#define COMPARAR_AREA 2
#define COMPARAR_PIB 3
#define COMPARAR_PONTOS_TURISTICOS 4
#define COMPARAR_DENSIDADE_POPULACIONAL 5
#define COMPARAR_PIB_PER_CAPITA 6

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

    int escolhaAtributo1; // Variável para armazenar a primeira escolha de atributo do usuário
    int escolhaAtributo2; // Variável para armazenar a segunda escolha de atributo do usuário

    // Variáveis para armazenar os valores dos atributos escolhidos para cada carta
    float valorAtributo1_carta1, valorAtributo1_carta2;
    float valorAtributo2_carta1, valorAtributo2_carta2;

    // Ponteiros de char para armazenar os nomes dos atributos escolhidos para exibição
    char *nomeAtributo1 = "";
    char *nomeAtributo2 = "";

    // Variáveis para armazenar a soma dos valores dos atributos para cada carta
    float somaCarta1, somaCarta2;

    // --- Coleta de dados para a Carta 1 ---
    printf("--- Inserir dados para a Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km^2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Calculos para a Carta 1 ---
    // Utiliza o operador ternário para evitar divisão por zero
    densidadePopulacional1 = (area1 != 0.0) ? (float)populacao1 / area1 : 0.0;
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1000000000.0) / populacao1 : 0.0;

    printf("\n");

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
    densidadePopulacional2 = (area2 != 0.0) ? (float)populacao2 / area2 : 0.0;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1000000000.0) / populacao2 : 0.0;

    printf("\n");

    // --- Exibição dos dados das Cartas (Opcional, para referência do usuário) ---
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

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

    printf("\n");

    // --- Menu Interativo para a PRIMEIRA Comparação ---
    printf("--- Escolha o PRIMEIRO Atributo para Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &escolhaAtributo1);

    // Atribui os valores e o nome do primeiro atributo com base na escolha
    switch (escolhaAtributo1) {
        case COMPARAR_POPULACAO:
            valorAtributo1_carta1 = (float)populacao1;
            valorAtributo1_carta2 = (float)populacao2;
            nomeAtributo1 = "População";
            break;
        case COMPARAR_AREA:
            valorAtributo1_carta1 = area1;
            valorAtributo1_carta2 = area2;
            nomeAtributo1 = "Área";
            break;
        case COMPARAR_PIB:
            valorAtributo1_carta1 = pib1;
            valorAtributo1_carta2 = pib2;
            nomeAtributo1 = "PIB";
            break;
        case COMPARAR_PONTOS_TURISTICOS:
            valorAtributo1_carta1 = (float)pontosTuristicos1;
            valorAtributo1_carta2 = (float)pontosTuristicos2;
            nomeAtributo1 = "Número de Pontos Turísticos";
            break;
        case COMPARAR_DENSIDADE_POPULACIONAL:
            valorAtributo1_carta1 = densidadePopulacional1;
            valorAtributo1_carta2 = densidadePopulacional2;
            nomeAtributo1 = "Densidade Populacional";
            break;
        case COMPARAR_PIB_PER_CAPITA:
            valorAtributo1_carta1 = pibPerCapita1;
            valorAtributo1_carta2 = pibPerCapita2;
            nomeAtributo1 = "PIB per Capita";
            break;
        default:
            printf("Opção inválida para o primeiro atributo. Encerrando o programa.\n");
            return 1; // Retorna com erro
    }

    printf("\n");

    // --- Menu Interativo para a SEGUNDA Comparação (Dinâmico) ---
    printf("--- Escolha o SEGUNDO Atributo para Comparação ---\n");
    printf("Selecione um atributo diferente do primeiro:\n");

    // Exibe as opções restantes com base na primeira escolha
    if (escolhaAtributo1 != COMPARAR_POPULACAO) printf("1. População\n");
    if (escolhaAtributo1 != COMPARAR_AREA) printf("2. Área\n");
    if (escolhaAtributo1 != COMPARAR_PIB) printf("3. PIB\n");
    if (escolhaAtributo1 != COMPARAR_PONTOS_TURISTICOS) printf("4. Número de Pontos Turísticos\n");
    if (escolhaAtributo1 != COMPARAR_DENSIDADE_POPULACIONAL) printf("5. Densidade Populacional\n");
    if (escolhaAtributo1 != COMPARAR_PIB_PER_CAPITA) printf("6. PIB per Capita\n");

    printf("Digite o número do segundo atributo desejado: ");
    scanf("%d", &escolhaAtributo2);

    // Validação da segunda escolha para garantir que é diferente da primeira e válida
    if (escolhaAtributo2 == escolhaAtributo1 || escolhaAtributo2 < 1 || escolhaAtributo2 > 6) {
        printf("Opção inválida para o segundo atributo ou igual ao primeiro. Encerrando o programa.\n");
        return 1; // Retorna com erro
    }

    // Atribui os valores e o nome do segundo atributo com base na escolha
    switch (escolhaAtributo2) {
        case COMPARAR_POPULACAO:
            valorAtributo2_carta1 = (float)populacao1;
            valorAtributo2_carta2 = (float)populacao2;
            nomeAtributo2 = "População";
            break;
        case COMPARAR_AREA:
            valorAtributo2_carta1 = area1;
            valorAtributo2_carta2 = area2;
            nomeAtributo2 = "Área";
            break;
        case COMPARAR_PIB:
            valorAtributo2_carta1 = pib1;
            valorAtributo2_carta2 = pib2;
            nomeAtributo2 = "PIB";
            break;
        case COMPARAR_PONTOS_TURISTICOS:
            valorAtributo2_carta1 = (float)pontosTuristicos1;
            valorAtributo2_carta2 = (float)pontosTuristicos2;
            nomeAtributo2 = "Número de Pontos Turísticos";
            break;
        case COMPARAR_DENSIDADE_POPULACIONAL:
            valorAtributo2_carta1 = densidadePopulacional1;
            valorAtributo2_carta2 = densidadePopulacional2;
            nomeAtributo2 = "Densidade Populacional";
            break;
        case COMPARAR_PIB_PER_CAPITA:
            valorAtributo2_carta1 = pibPerCapita1;
            valorAtributo2_carta2 = pibPerCapita2;
            nomeAtributo2 = "PIB per Capita";
            break;
        // Não é necessário um 'default' aqui, pois a validação já ocorreu antes
    }

    printf("\n--- Resultado da Comparação Final ---\n");
    printf("Atributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2);

    // --- Exibição detalhada dos valores dos atributos ---
    printf("\nDetalhes dos atributos para a Carta 1 (%s):\n", nomeCidade1);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo1_carta1);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo2_carta1);

    printf("\nDetalhes dos atributos para a Carta 2 (%s):\n", nomeCidade2);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtributo1_carta2);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtributo2_carta2);

    // --- Lógica para somar os atributos e determinar o vencedor ---
    // A soma é feita diretamente com os valores, independentemente da regra de 'menor valor vence' para densidade,
    // pois a regra se aplica à comparação individual do atributo, não à soma geral.
    somaCarta1 = valorAtributo1_carta1 + valorAtributo2_carta1;
    somaCarta2 = valorAtributo1_carta2 + valorAtributo2_carta2;

    printf("\nSoma dos atributos para Carta 1 (%s): %.2f\n", nomeCidade1, somaCarta1);
    printf("Soma dos atributos para Carta 2 (%s): %.2f\n", nomeCidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("Resultado: Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    } else if (somaCarta2 > somaCarta1) {
        printf("Resultado: Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}