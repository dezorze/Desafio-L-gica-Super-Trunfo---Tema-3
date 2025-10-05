#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    char estado1[50], codigo1[20], cidade1[50];
    char estado2[50], codigo2[20], cidade2[50];
    int pontosTuristicos1, pontosTuristicos2;
    float pib1, area1;
    float pib2, area2;
    unsigned long int populacao1, populacao2;
    float pibpercapita1, pibpercapita2;
    float densidade1, densidade2;
    float score1, score2;
    
    // === Leitura da Carta 1 ===
    printf("=== CARTA 1 - NÍVEL MESTRE ===\n");
    printf("Digite o Estado da carta 1:\n");
    scanf("%49s", estado1);
    printf("Digite o Código do Estado da carta 1:\n");
    scanf("%19s", codigo1);
    printf("Digite a Cidade da carta 1:\n");
    scanf("%49s", cidade1);
    printf("Digite a Populacao da Cidade da carta 1:\n");
    scanf("%lu", &populacao1);
    printf("Digite o Número de pontos turisticos da Cidade da carta 1:\n");
    scanf("%d", &pontosTuristicos1);
    printf("Digite o PIB da Cidade da carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite a Área da Cidade da carta 1:\n");
    scanf("%f", &area1);

    // === Leitura da Carta 2 ===
    printf("\n=== CARTA 2 - NÍVEL MESTRE ===\n");
    printf("Digite o Estado da carta 2:\n");
    scanf("%49s", estado2);
    printf("Digite o Código da carta 2:\n");
    scanf("%19s", codigo2);
    printf("Digite a Cidade da carta 2:\n");
    scanf("%49s", cidade2);
    printf("Digite a Populacao da carta 2:\n");
    scanf("%lu", &populacao2);
    printf("Digite o Número de pontos turisticos da carta 2:\n");
    scanf("%d", &pontosTuristicos2);
    printf("Digite o PIB da carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite a Área da carta 2:\n");
    scanf("%f", &area2);

    // === Cálculos ===
    pibpercapita1 = (populacao1 > 0) ? (pib1 / populacao1) : 0;
    pibpercapita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;
    densidade1 = (area1 > 0) ? (populacao1 / area1) : 0;
    densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;
    score1 = (populacao1 + pontosTuristicos1 + pib1 + area1);
    score2 = (populacao2 + pontosTuristicos2 + pib2 + area2);

    // === Exibição ===
    printf("\n--- Dados da carta 1 ---\n");
    printf("Cidade: %s | Score: %.2f\n", cidade1, score1);
    printf("\n--- Dados da carta 2 ---\n");
    printf("Cidade: %s | Score: %.2f\n", cidade2, score2);

    // === Determinar vencedor com switch ===
    printf("\n=== RESULTADO FINAL ===\n");

    // === Usando operador ternario ao inves do if e else convencional 
    int resultado;
    resultado = (score1 > score2) ? 1 : (score2 > score1) ? 2 : 0;

    // === if e else convencional - comentados
    // int resultado;
    // if (score1 > score2)
    //     resultado = 1;
    // else if (score2 > score1)
    //     resultado = 2;
    // else
    //     resultado = 0;

    switch (resultado) {
        case 1:
            printf("A CARTA 1 (%s) VENCEU com %.2f pontos!\n", cidade1, score1);
            break;
        case 2:
            printf("A CARTA 2 (%s) VENCEU com %.2f pontos!\n", cidade2, score2);
            break;
        case 0:
            printf("EMPATE! Ambas as cartas têm %.2f pontos!\n", score1);
            break;
        default:
            printf("Erro ao determinar vencedor.\n");
    }

    return 0;
}
