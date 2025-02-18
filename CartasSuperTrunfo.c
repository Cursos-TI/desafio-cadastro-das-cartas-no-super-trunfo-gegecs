#include <stdio.h>

int main() {
    //Nenhum valor será inserido aqui, pois o usuário irá inserir pelo scanf
    //Variáveis da Primeira Carta.
    //Variável para a quantidade da população e quantidade de pontos turísticos
    int populacao1, pontosTuristicos1;
    //Variável para o valor da área, valor do PIB, valor do PIB per capita e densidade populacional
    float area1, pib1, pibCapita1, densidade1, super1;
    //Variável char sem array, pois utilizaremos apenas a inicial do estado
    char estado1;
    //Variável para o código da cidade
    char codigo1[20];
    //Variável para o nome da cidade
    char cidade1[50];

    //Variáveis da Segunda Carta
    //Variável para a quantidade da população e quantidade de pontos turísticos
    int populacao2, pontosTuristicos2;
    //Variável para o valor da área, valor do PIB, valor do PIB per capita e densidade populacional
    float area2, pib2, pibCapita2, densidade2, super2;
    //Variável char sem array, pois utilizaremos apenas a inicial do estado
    char estado2;
    //Variável para o código da cidade
    char codigo2[20];
    //Variável para o nome da cidade
    char cidade2[50];


    // printf = para imprimir uma mensagem ao usuário.
    printf("Iniciaremos o cadastro da sua Primeira Carta!\n");

    printf("Digite a inicial do estado:\n");
    //Utilizaremos o "%c" por conta do estado estar em um formato char de apenas um caractere.
    scanf("%c", &estado1);
    
    printf("Digite o código da cidade:\n");
    //Transformaremos o código em uma string, por isso o "%s".
    scanf("%s", &codigo1);

    // Estou com um problema que, ao escrever dando espaço, todo o código é pulado, então especifiquei para que o usuário escreva tudo junto
    printf("Digite o nome da cidade (tudo junto):\n");
    scanf("%s", &cidade1);

    printf("Digite a população:\n");
    //Usaremos o %d para valores inteiros.
    scanf("%d", &populacao1);

    printf("Digite a área em km²:\n");
    //Usaremos o %f por conta da área estar em uma variável float.
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos1);
    
    //pibCapita recebendo o valor da divisão entre o pib e a população que o usuário digitou
    pibCapita1 = pib1 / populacao1;
    //densidade recebendo o valor da divisão entre a população e a área que o usuário digitou
    densidade1 = populacao1 / area1;
    //super poder calculado
    super1 = populacao1 + area1 + densidade1 + pib1 + pibCapita1 + pontosTuristicos1;

    // Mensagem dizendo que a carta foi cadastrada.
    printf("\nA sua Primeira Carta foi cadastrada!\n");
    // Mensagem informando a inicial do estado.
    printf("\nEstado: %c\n", estado1);
    // "%c%s" para juntar a inicial do estado com o código e por fim mostrando os dois juntos.
    printf("Código da carta: %c%s\n", estado1, codigo1);
    // Mensagem mostrando o nome da cidade.
    printf("Nome da cidade: %s\n", cidade1);
    // Mensagem mostrando a quantidade de população.
    printf("População: %d\n", populacao1);
    // Mensagem mostrando a área em km².
    printf("Área: %.2f km²\n", area1);
    // Mensagem mostrando a densidade populacional.
    printf("Densidade populacional: %.2f\n", densidade1);
    // Mensagem mostrando o PIB da cidade.
    printf("PIB: %.3f reais\n", pib1);
    // Mensagem mostrando o PIB per capita da cidade.
    printf("PIB per capita: %.3f\n", pibCapita1);
    // Mensagem apresentado a quantidade de pontos turísticos da cidade.
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    // Mensagem apresentado a quantidade do super poder.
    printf("Valor do SuperPoder: %.2f\n", super1);

    // printf = para imprimir uma mensagem ao usuário.
    printf("\nIniciaremos o cadastro da sua Segunda Carta!\n");

    printf("Digite a inicial do estado:\n");
    //Utilizaremos o "%c" por conta do estado estar em um formato char de apenas um caractere.
    scanf(" %c", &estado2);
    
    printf("Digite o código da cidade:\n");
    //Transformaremos o código em uma string, por isso o "%s".
    scanf("%s", &codigo2);

    // Estou com um problema que, ao escrever dando espaço, todo o código é pulado, então especifiquei para que o usuário escreva tudo junto
    printf("Digite o nome da cidade (tudo junto):\n");
    scanf("%s", &cidade2);

    printf("Digite a população:\n");
    //Usaremos o %d para valores inteiros.
    scanf("%d", &populacao2);

    printf("Digite a área em km²:\n");
    //Usaremos o %f por conta da área estar em uma variável float.
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos2);
    
    //pibCapita recebendo o valor da divisão entre o pib e a população que o usuário digitou
    pibCapita2 = pib2 / populacao2;
    //densidade recebendo o valor da divisão entre a população e a área que o usuário digitou
    densidade2 = populacao2 / area2;
    //super poder calculado
    super2 = populacao2 + area2 + densidade2 + pib2 + pibCapita2 + pontosTuristicos2;

    // Mensagem dizendo que a carta foi cadastrada.
    printf("\nA sua Segunda Carta foi cadastrada!\n");
    // Mensagem informando a inicial do estado.
    printf("\nEstado: %c\n", estado2);
    // "%c%s" para juntar a inicial do estado com o código e por fim mostrando os dois juntos.
    printf("Código da carta: %c%s\n", estado2, codigo2);
    // Mensagem mostrando o nome da cidade.
    printf("Nome da cidade: %s\n", cidade2);
    // Mensagem mostrando a quantidade de população.
    printf("População: %d\n", populacao2);
    // Mensagem mostrando a área em km².
    printf("Área: %.2f km²\n", area2);
    // Mensagem mostrando a densidade populacional.
    printf("Densidade populacional: %.2f\n", densidade2);
    // Mensagem mostrando o PIB da cidade.
    printf("PIB: %.3f reais\n", pib2);
    // Mensagem mostrando o PIB per capita da cidade.
    printf("PIB per capita: %.3f\n", pibCapita2);
    // Mensagem apresentado a quantidade de pontos turísticos da cidade.
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    // Mensagem apresentado a quantidade do super poder.
    printf("Valor do SuperPoder: %.2f\n", super2);

    printf("\n*** Comparação entre as Cartas ***\n");

    printf("\nPopulação: Carta 1 com %d e Carta 2 com %d: \n", populacao1, populacao2);
    if (populacao1 > populacao2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }
    
    printf("\nÁrea: Carta 1 com %.1f e Carta 2 com %.1f: \n", estado1, codigo1, area1, estado2, codigo2, area2);
    if (area1 > area2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    printf("\nDensidade: Carta 1 com %.1f e Carta 2 com %.1f: \n", estado1, codigo1, densidade1, estado2, codigo2, densidade2);
    if (densidade1 < densidade2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    printf("\nPIB: Carta 1 com %.1f e Carta 2 com %.1f: \n", estado1, codigo1, pib1, estado2, codigo2, pib2);
    if (pib1 > pib2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    printf("\nPIB per capita: Carta 1 com %.1f e Carta 2 com %.1f: \n", estado1, codigo1, pibCapita1, estado2, codigo2, pibCapita2);
    if (pibCapita1 > pibCapita2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    printf("\nNúmero de pontos turísticos: Carta 1 com %d e Carta 2 com %d: \n", estado1, codigo1, pontosTuristicos1, estado2, codigo2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    printf("\nValor do SuperPoder: Carta 1 com %.2f e Carta 2 com %.2f: \n", estado1, codigo1, super1, estado2, codigo2, super2);
    if (super1 > super2) {
        printf("Carta %c%s ganhou!\n", estado1, codigo1);
    } else {
        printf("Carta %c%s ganhou!\n", estado2, codigo2);
    }

    return 0;
}
