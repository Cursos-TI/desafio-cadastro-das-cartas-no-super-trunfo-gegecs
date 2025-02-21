#include <stdio.h>

int main() {
    int escolha1, escolha2;

    int populacao1, pontosTuristicos1;
    float area1, pib1, pibCapita1, densidade1, super1, resultado1;
    char estado1;
    char codigo1[20];
    char cidade1[50];

    int populacao2, pontosTuristicos2;
    float area2, pib2, pibCapita2, densidade2, super2, resultado2;
    char estado2;
    char codigo2[20];
    char cidade2[50];

    printf("Iniciaremos o cadastro da sua Primeira Carta!\n");
    printf("Digite a inicial do estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade:\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade (tudo junto):\n");
    scanf(" %s", &cidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos1);
    
    pibCapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;
    super1 = populacao1 + area1 + densidade1 + pib1 + pibCapita1 + pontosTuristicos1;

    printf("\nA sua Primeira Carta foi cadastrada!\n");
    printf("\nEstado: %c\n", estado1);
    printf("Código da carta: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.3f reais\n", pib1);
    printf("PIB per capita: %.3f\n", pibCapita1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Valor do SuperPoder: %.2f\n", super1);

    printf("\nIniciaremos o cadastro da sua Segunda Carta!\n");
    printf("Digite a inicial do estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade:\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade (tudo junto):\n");
    scanf(" %s", &cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a área em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf(" %d", &pontosTuristicos2);
    
    pibCapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    super2 = populacao2 + area2 + densidade2 + pib2 + pibCapita2 + pontosTuristicos2;

    printf("\nA sua Segunda Carta foi cadastrada!\n");
    printf("\nEstado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.3f reais\n", pib2);
    printf("PIB per capita: %.3f\n", pibCapita2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Valor do SuperPoder: %.2f\n", super2);

    printf("\n*** Comparação entre as Cartas ***\n");
    printf("[1] População\n[2] Área\n[3] Densidade demográfica\n[4] PIB\n[5] PIB per capta\n[6] Número de pontos turísticos\n[7] Super Trunfo\n");
    printf("\nEscolha um atributo: ");
    scanf(" %d", &escolha1);

    switch(escolha1) {
        case 1:    
            printf("População - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
            if(populacao1 > populacao2) {
                printf("A primeira carta ganhou!\n");
            } else if(populacao1 < populacao2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] Área\n[2] Densidade demográfica\n[3] PIB\n[4] PIB per capta\n[5] Número de pontos turísticos\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nÁrea - Primeira Carta: %.1f - Segunda Carta: %.1f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + area1;
                    resultado2 = populacao2 + area2;
                    printf("\nAtributos escolhidos: População - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + densidade1;
                    resultado2 = populacao2 + densidade2;
                    printf("\nAtributos escolhidos: População - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pib1 < pib2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pib1;
                    resultado2 = populacao2 + pib2;
                    printf("\nAtributos escolhidos: População - PIB\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB per capta - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pibCapita1;
                    resultado2 = populacao2 + pibCapita2;
                    printf("\nAtributos escolhidos: População - PIB per capita\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pontosTuristicos1;
                    resultado2 = populacao2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: População - Número de pontos turísticos \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + super1;
                    resultado2 = populacao2 + super2;
                    printf("\nAtributos escolhidos: População - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
            }               
            break;
        case 2:
            printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
            if(area1 > area2) {
                printf("A primeira carta ganhou!\n");
            } else if(area1 < area2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Densidade demográfica\n[3] PIB\n[4] PIB per capta\n[5] Número de pontos turísticos\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + area1;
                    resultado2 = populacao2 + area2;
                    printf("\nAtributos escolhidos: Área - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + densidade1;
                    resultado2 = area2 + densidade2;
                    printf("\nAtributos escolhidos: Área - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pib1 < pib2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pib1;
                    resultado2 = area2 + pib2;
                    printf("\nAtributos escolhidos: Área - PIB\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB per capta - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pibCapita1;
                    resultado2 = area2 + pibCapita2;
                    printf("\nAtributos escolhidos: Área - PIB per capita\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pontosTuristicos1;
                    resultado2 = area2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Área - Número de pontos turísticos \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + super1;
                    resultado2 = area2 + super2;
                    printf("\nAtributos escolhidos: Área - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        case 3:
            printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
            if(densidade1 < densidade2) {
                printf("A primeira carta ganhou!\n");
            } else if(densidade1 > densidade2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Área\n[3] PIB\n[4] PIB per capta\n[5] Número de pontos turísticos\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + densidade1;
                    resultado2 = populacao2 + densidade2;
                    printf("\nAtributos escolhidos: Densidade demográfica - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + densidade1;
                    resultado2 = area2 + densidade2;
                    printf("\nAtributos escolhidos: Densidade demográfica - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pib1 < pib2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pib1;
                    resultado2 = densidade1 + pib2;
                    printf("\nAtributos escolhidos: Densidade demográfica - PIB\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB per capta - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pibCapita1;
                    resultado2 = densidade2+ pibCapita2;
                    printf("\nAtributos escolhidos: Densidade demográfica - PIB per capita\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pontosTuristicos1;
                    resultado2 = densidade2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Densidade demográfica - Número de pontos turísticos \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + super1;
                    resultado2 = densidade2 + super2;
                    printf("\nAtributos escolhidos: Densidade demográfica - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        case 4:
            printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
            if(pib1 > pib2) {
                printf("A primeira carta ganhou!\n");
            } else if(pib1 < pib2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Área\n[3] Densidade demográfica\n[4] PIB per capta\n[5] Número de pontos turísticos\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pib1;
                    resultado2 = populacao2 + pib2;
                    printf("\nAtributos escolhidos: PIB - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pib1;
                    resultado2 = area2 + pib2;
                    printf("\nAtributos escolhidos: PIB - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pib1;
                    resultado2 = densidade1 + pib2;
                    printf("\nAtributos escolhidos: PIB - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pib1 + pibCapita1;
                    resultado2 = pib2 + pibCapita2;
                    printf("\nAtributos escolhidos: PIB - PIB per capita\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pib1 + pontosTuristicos1;
                    resultado2 = pib2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: PIB - Número de pontos turísticos \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pib1 + super1;
                    resultado2 = pib2 + super2;
                    printf("\nAtributos escolhidos: PIB - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        case 5:
            printf("PIB per capita - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
            if(pibCapita1 > pibCapita2) {
                printf("A primeira carta ganhou!\n");
            } else if(pibCapita1 < pibCapita1) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Área\n[3] Densidade demográfica\n[4] PIB\n[5] Número de pontos turísticos\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pibCapita1;
                    resultado2 = populacao2 + pibCapita2;
                    printf("\nAtributos escolhidos: PIB per capita - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pibCapita1;
                    resultado2 = area2 + pibCapita2;
                    printf("\nAtributos escolhidos: PIB per capita - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pibCapita1;
                    resultado2 = densidade1 + pibCapita2;
                    printf("\nAtributos escolhidos: PIB per capita - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB per capta - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pib1 + pibCapita1;
                    resultado2 = pib2 + pibCapita2;
                    printf("\nAtributos escolhidos: PIB - PIB per capita\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pibCapita1 + pontosTuristicos1;
                    resultado2 = pibCapita2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: PIB per capita - Número de pontos turísticos \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pibCapita1 + super1;
                    resultado2 = pibCapita2 + super2;
                    printf("\nAtributos escolhidos: PIB per capita - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        case 6:
            printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2) {
                printf("A primeira carta ganhou!\n");
            } else if(pontosTuristicos1 < pontosTuristicos2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Área\n[3] Densidade demográfica\n[4] PIB\n[5] PIB per capita\n[6] Super Trunfo\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + pontosTuristicos1;
                    resultado2 = populacao2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + pontosTuristicos1;
                    resultado2 = area2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + pontosTuristicos1;
                    resultado2 = densidade1 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pib1 < pib1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pontosTuristicos1 + pib1;
                    resultado2 = pontosTuristicos2 + pib2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - PIB\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("PIB per capita - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pibCapita1 + pontosTuristicos1;
                    resultado2 = pibCapita2 + pontosTuristicos2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - PIB per capita \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
                    if(super1 > super2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(super1 < super2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pontosTuristicos1 + super1;
                    resultado2 = pontosTuristicos2 + super2;
                    printf("\nAtributos escolhidos: Número de pontos turísticos - Super Trunfo \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        case 7:
            printf("Super Trunfo - Primeira Carta: %f - Segunda Carta: %f\n", super1, super2);
            if(super1 > super2) {
                printf("A primeira carta ganhou!\n");
            } else if(super1 < super2) {
                printf("A segunda carta ganhou!\n");
            } else {
                printf("Empate!\n");
            }
            printf("\n[1] População\n[2] Área\n[3] Densidade demográfica\n[4] PIB\n[5] PIB per capita\n[6] Número de pontos turísticos\n");
            printf("Escolha um outro atributo: ");
            scanf(" %d", &escolha2);
            switch (escolha2) {
                case 1:
                    printf("\nPopulação - Primeira Carta: %d - Segunda Carta: %d\n", populacao1, populacao2);
                    if(populacao1 > populacao2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(populacao1 < populacao2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = populacao1 + super1;
                    resultado2 = populacao2 + super2;
                    printf("\nAtributos escolhidos: Super Trunfo - População\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:    
                    printf("Área - Primeira Carta: %f - Segunda Carta: %f\n", area1, area2);
                    if(area1 > area2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(area1 < area2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = area1 + super1;
                    resultado2 = area2 + super2;
                    printf("\nAtributos escolhidos: Super Trunfo - Área\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }                
                case 3:
                    printf("Densidade demográfica - Primeira Carta: %f - Segunda Carta: %f\n", densidade1, densidade2);
                    if(densidade1 < densidade2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(densidade1 > densidade2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = densidade1 + super1;
                    resultado2 = densidade1 + super2;
                    printf("\nAtributos escolhidos: Super Trunfo - Densidade demográfica\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("PIB - Primeira Carta: %f - Segunda Carta: %f\n", pib1, pib2);
                    if(pib1 > pib2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pib1 < pib1) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = super1 + pib1;
                    resultado2 = super2 + pib2;
                    printf("\nAtributos escolhidos: Super Trunfo - PIB\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("PIB per capita - Primeira Carta: %f - Segunda Carta: %f\n", pibCapita1, pibCapita2);
                    if(pibCapita1 > pibCapita2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pibCapita1 < pibCapita2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pibCapita1 + super1;
                    resultado2 = pibCapita2 + super2;
                    printf("\nAtributos escolhidos: Super Trunfo - PIB per capita \n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("Número de pontos turísticos - Primeira Carta: %d - Segunda Carta: %d\n", pontosTuristicos1, pontosTuristicos2);
                    if(pontosTuristicos1 > pontosTuristicos2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(pontosTuristicos1 < pontosTuristicos2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    resultado1 = pontosTuristicos1 + super1;
                    resultado2 = pontosTuristicos2 + super2;
                    printf("\nAtributos escolhidos: Super Trunfo - Número de pontos turísticos\n");
                    printf("\nSoma de cada atributo - Primeira carta: %.1f - Segunda Carta: %.1f\n", resultado1, resultado2);
                    if(resultado1 > resultado2) {
                        printf("A primeira carta ganhou!\n");
                    } else if(resultado1 < resultado2) {
                        printf("A segunda carta ganhou!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opção inválida\n");
                    break;
            }
            break;
        default:
            printf("Opção Inválida!\n");
            break;
    }
    return 0;
}
