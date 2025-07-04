#include <stdio.h>

int main() {
    int tabuleiro[8][8];
    int opcao;
    char repetir;

    do {
        puts("=== Xadrez Nivel Novato ===");
        puts("Escolha uma peca para simular:");
        puts("1 - Torre");
        puts("2 - Bispo");
        puts("3 - Rainha");

        do {
            printf("Digite a opcao (1 a 3): ");
            scanf("%d", &opcao);
        } while (opcao < 1 || opcao > 3);

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tabuleiro[i][j] = 0;
            }
        }

        int lin = 3;
        int col = 3;
        tabuleiro[lin][col] = 1;

        if (opcao == 1) {
            for (int i = 0; i < 8; i++) {
                if (i != lin) tabuleiro[i][col] = 2;
                if (i != col) tabuleiro[lin][i] = 2;
            }
        } else if (opcao == 2) {
            int i, j;
            i = lin - 1; j = col - 1;
            while (i >= 0 && j >= 0) { tabuleiro[i][j] = 2; i--; j--; }
            i = lin - 1; j = col + 1;
            while (i >= 0 && j < 8) { tabuleiro[i][j] = 2; i--; j++; }
            i = lin + 1; j = col - 1;
            while (i < 8 && j >= 0) { tabuleiro[i][j] = 2; i++; j--; }
            i = lin + 1; j = col + 1;
            while (i < 8 && j < 8) { tabuleiro[i][j] = 2; i++; j++; }
        } else if (opcao == 3) {
            for (int i = 0; i < 8; i++) {
                if (i != lin) tabuleiro[i][col] = 2;
                if (i != col) tabuleiro[lin][i] = 2;
            }
            int i, j;
            i = lin - 1; j = col - 1;
            while (i >= 0 && j >= 0) { tabuleiro[i][j] = 2; i--; j--; }
            i = lin - 1; j = col + 1;
            while (i >= 0 && j < 8) { tabuleiro[i][j] = 2; i--; j++; }
            i = lin + 1; j = col - 1;
            while (i < 8 && j >= 0) { tabuleiro[i][j] = 2; i++; j--; }
            i = lin + 1; j = col + 1;
            while (i < 8 && j < 8) { tabuleiro[i][j] = 2; i++; j++; }
        }

        puts("");
        puts("Tabuleiro:");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            puts("");
        }
        puts("0 = vazio | 1 = peca | 2 = pode ir");

        printf("Quer simular outra peca? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    puts("Fechou o programa. Valeu!");
    return 0;
}
