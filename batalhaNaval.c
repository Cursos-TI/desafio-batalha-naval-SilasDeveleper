#include <stdio.h>
#include <locale.h>
// Desafio Batalha Naval - MateCheck
// Este c�digo inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os coment�rios para implementar cada parte do desafio.

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Configura o locale para portugu�s
    // N�vel Novato - Posicionamento dos Navios
    // Sugest�o: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (vazio) 
    
    // posicionar o navio 1 na linha 2, coluna 3 a 5 (horizontal):
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // posicionar o navio 2 na linha 7, 8, 9 coluna 8 (vertical):
    tabuleiro[7][8] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][8] = 3;
    
    // posicionar o naviu 3 na linha 4, 5, 6 coluna 2, 3, 4(diagonal):
    tabuleiro[4][2] = 3;
    tabuleiro[5][3] = 3;
    tabuleiro[6][4] = 3;

    // posicionar o navio 4 na linha 7, 8, 9 coluna 0, 1, 2(diagonal):
    tabuleiro[7][2] = 3;
    tabuleiro[8][1] = 3;
    tabuleiro[9][0] = 3;

    // Sugest�o: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Navio 1: (2,3) (2,4) (2,5)\n");
    printf("Navio 2: (7,8) (8,8) (9,8)\n");
    printf("Navio 3: (4,2) (5,3) (6,4)\n");
    printf("Navio 4: (7,2) (8,1) (9,0)\n");
    
    //exibir o tabuleiro no console:
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // N�vel Aventureiro - Expans�o do Tabuleiro e Posicionamento Diagonal
    // Sugest�o: Expanda o tabuleiro para uma matriz 10x10.
    // Sugest�o: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugest�o: Exiba o tabuleiro completo no console, mostrando 0 para posi��es vazias e 3 para posi��es ocupadas.




    
    // N�vel Mestre - Habilidades Especiais com Matrizes
    // Sugest�o: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugest�o: Utilize estruturas de repeti��o aninhadas para preencher as �reas afetadas por essas habilidades no tabuleiro.
    // Sugest�o: Exiba o tabuleiro com as �reas afetadas, utilizando 0 para �reas n�o afetadas e 1 para �reas atingidas.

    // Exemplos de exibi��o das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
