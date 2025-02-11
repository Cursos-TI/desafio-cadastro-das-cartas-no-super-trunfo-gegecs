#include <stdio.h>

int main() {
    //Nenhum valor será inserido aqui, pois o usuário irá inserir pelo scanf
    //Variável para a quantidade da população
    int populacao;
    //Variável para a quantidade de pontos turísticos
    int pontosTuristicos;
    //Variável para o valor da área
    float area;
    //Variável para o valor do PIB
    float pib;
    //Variável char sem array, pois utilizaremos apenas a inicial do estado
    char estado;
    //Variável para o código da cidade
    char codigo[20];
    //Variável para o nome da cidade
    char cidade[50];

    // printf = para imprimir uma mensagem ao usuário.
    printf("Iniciaremos o cadastro das suas cartas!\n");

    printf("Digite a inicial do estado:\n");
    //Utilizaremos o "%c" por conta do estado estar em um formato char de apenas um caractere.
    scanf("%c", &estado);

    
    printf("Digite o código da cidade:\n");
    //Transformaremos o código em uma string, por isso o "%s".
    scanf("%s", &codigo);

    // Estou com um problema que, ao escrever dando espaço, todo o código é pulado, então especifiquei para que o usuário escreva tudo junto
    printf("Digite o nome da cidade (tudo junto):\n");
    scanf("%s", &cidade);

    printf("Digite a população:\n");
    //Usaremos o %d para valores inteiros.
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    //Usaremos o %f por conta da área estar em uma variável float.
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);
    
    // Mensagem dizendo que a carta foi cadastrada.
    printf("\nA sua carta foi cadastrada!\n");
    // Mensagem informando a inicial do estado.
    printf("\nEstado: %c\n", estado);
    // "%c%s" para juntar a inicial do estado com o código e por fim mostrando os dois juntos.
    printf("Código da carta: %c%s\n", estado, codigo);
    // Mensagem mostrando o nome da cidade.
    printf("Nome da cidade: %s\n", cidade);
    // Mensagem mostrando a quantidade de população.
    printf("População: %d\n", populacao);
    // Mensagem mostrando a área em km².
    printf("Área: %f km²\n", area);
    // Mensagem mostrando o PIB da cidade.
    printf("PIB: %f bilhões de reais\n", pib);
    // Mensagem apresentado a quantidade de pontos turísticos da cidade
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
