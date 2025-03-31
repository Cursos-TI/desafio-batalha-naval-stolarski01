#include <stdio.h>

int main() {
    int tabuleiro[10][10]; // Criando o tabuleiro
    int i, j;
    
    // Inicializa o tabuleiro com 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posiciona os navios
    int linhaNavio1 = 2, colunaNavio1 = 3; // Começo do primeiro navio (horizontal)
    int linhaNavio2 = 5, colunaNavio2 = 7; // Começo do segundo navio (vertical)
    
    // Navio horizontal
    tabuleiro[linhaNavio1][colunaNavio1] = 3;
    tabuleiro[linhaNavio1][colunaNavio1 + 1] = 3;
    tabuleiro[linhaNavio1][colunaNavio1 + 2] = 3;
    
    // Navio vertical
    tabuleiro[linhaNavio2][colunaNavio2] = 3;
    tabuleiro[linhaNavio2 + 1][colunaNavio2] = 3;
    tabuleiro[linhaNavio2 + 2][colunaNavio2] = 3;
    
    // Exibe as coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    printf("(%d, %d)\n", linhaNavio1, colunaNavio1);
    printf("(%d, %d)\n", linhaNavio1, colunaNavio1 + 1);
    printf("(%d, %d)\n", linhaNavio1, colunaNavio1 + 2);
    
    printf("\nCoordenadas do navio vertical:\n");
    printf("(%d, %d)\n", linhaNavio2, colunaNavio2);
    printf("(%d, %d)\n", linhaNavio2 + 1, colunaNavio2);
    printf("(%d, %d)\n", linhaNavio2 + 2, colunaNavio2);
    
    // Exibe o tabuleiro
    printf("\nTabuleiro:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
