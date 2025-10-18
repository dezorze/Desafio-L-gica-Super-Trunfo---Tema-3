# include <stdio.h>

int main() {
    //nesse codigo, um for dentro de um while reproduz o mov do cavalo
    int movimento = 1;
    // esse while(movimento--) é intessante: enquanto movimento for true (1) ele decrementa.
    while(movimento--) {
        for(int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    return 0;
}