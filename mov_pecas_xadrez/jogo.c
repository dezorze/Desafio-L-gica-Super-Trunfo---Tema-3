# include <stdio.h>
# define TAM 8  // tamanho do tabuleiro 8x8

int main() {
    // Movimento da Torre:
    // for (int i = 0; i <= 5; i++) {
    //     printf("Cima\n");
    // }

    //Movimento do Cavalo:
    // int movimentoCavalo = 3;
    // while (movimentoCavalo--) {
    //     for(int i = 0; i < 2; i++) {
    //         printf("Cima\n");
    //     }
    // }
    // printf("Direita\n");

    // posição inicial do cavalo (exemplo)
    // int x = 4; // coluna
    // int y = 4; // linha

    // // todos os 8 movimentos possíveis do cavalo
    // int movimentos[8][2] = {
    //     { 2, 1},   // 2 para baixo, 1 para a direita
    //     { 1, 2},   // 1 para baixo, 2 para a direita
    //     {-1, 2},   // 1 para cima, 2 para a direita
    //     {-2, 1},   // 2 para cima, 1 para a direita
    //     {-2,-1},   // 2 para cima, 1 para a esquerda
    //     {-1,-2},   // 1 para cima, 2 para a esquerda
    //     { 1,-2},   // 1 para baixo, 2 para a esquerda
    //     { 2,-1}    // 2 para baixo, 1 para a esquerda
    // };

    // printf("Posição inicial do cavalo: (%d, %d)\n\n", x, y);

    // // testar todos os movimentos possíveis
    // for (int i = 0; i < 8; i++) {
    //     int novoX = x + movimentos[i][0];
    //     int novoY = y + movimentos[i][1];

    //     // verificar se ainda está dentro do tabuleiro 8x8
    //     if (novoX >= 1 && novoX <= 8 && novoY >= 1 && novoY <= 8) {
    //         printf("Movimento %d: (%d, %d)\n", i + 1, novoX, novoY);
    //     } else {
    //         printf("Movimento %d: fora do tabuleiro!\n", i + 1);
    //     }
    // }


     // posição inicial do cavalo (linha e coluna)
    int x = 4;  // linha
    int y = 4;  // coluna

    // movimentos possíveis do cavalo (8 direções)
    int movimentos[8][2] = {
        { 2, 1}, { 1, 2}, {-1, 2}, {-2, 1},
        {-2,-1}, {-1,-2}, { 1,-2}, { 2,-1}
    };

    // cria e inicializa o tabuleiro
    char tabuleiro[TAM][TAM];
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    // marca a posição inicial do cavalo
    tabuleiro[x - 1][y - 1] = '♞';  

    // marca as posições possíveis
    for (int i = 0; i < 8; i++) {
        int novoX = x + movimentos[i][0];
        int novoY = y + movimentos[i][1];

        if (novoX >= 1 && novoX <= 8 && novoY >= 1 && novoY <= 8) {
            tabuleiro[novoX - 1][novoY - 1] = 'x';
        }
    }

    // imprime o tabuleiro (de cima para baixo)
    printf("\nTabuleiro (8x8):\n\n");
    for (int i = TAM - 1; i >= 0; i--) {
        printf("%d ", i + 1);  // numeração das linhas
        for (int j = 0; j < TAM; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("  ");
    for (int j = 0; j < TAM; j++) {
        printf("%d ", j + 1);  // numeração das colunas
    }
    printf("\n\n");

    return 0;
}