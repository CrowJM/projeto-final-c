/*
Game  Memoria || Pares
jose miranda

Processo:
Matrizes  -> guardar o tabuleiro
Funções   -> separar cada parte do jogo
if/else   -> verificar se as duas cartas são iguais
while     -> continuar enquanto ainda existirem pares
for       -> mostrar e percorrer o tabuleiro
strings   -> nome do jogador
*/
//bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//prototipos ou funções auxiliares
void mostrarTabuleiro(void);
int escolherCarta(int *linha, int *coluna);
void randomcartas(void);




//main
int main(void) {

char nome[20];
int i, j, linha, coluna;

printf("========================\n");
printf("    JOGO DA MEMORIA     \n");
printf("========================\n");

printf("Nome do jogador: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = 0;  // -> para que remover o ultimo \n que é colocando quando carrego no enter


printf("\nBem-vindo, %s!\n", nome);

//função
mostrarTabuleiro();
escolherCarta(&linha, &coluna);
void randomcartas(void);





};






//funções auxiliares

//criar tabela
void mostrarTabuleiro(void)  {
    // Função para mostrar o tabuleiro
    char tabu[4][4];

    
    printf("   1 2 3 4\n\n");

        for (int linha = 0; linha < 4; linha++) {

               printf("%d  ", linha + 1);
            
            for (int coluna = 0; coluna < 4; coluna++){
                
                tabu[linha][coluna] = '?';
                printf("%c ", tabu[linha][coluna]);
                
            }

            printf("\n");
        }

};


//escolha da carta
int escolherCarta(int *linha, int *coluna) {
    printf("Linha: ");

        if (scanf("%d", linha) != 1){
            getchar();
            return 0;
        }

    printf("Coluna: ");

        if (scanf("%d", coluna) != 1){
            getchar();
            return 0;
        }

    getchar();
    return 1;



};


//atibuição de cartas aleatórias
void randomcartas(void) {


    char cartas[4] = {'A', 'B', 'C', 'D'};
    cartas[0] = 'A';
    cartas[1] = 'B';
    cartas[2] = 'C';
    cartas[3] = 'D';


    srand(time(NULL));

        for (int i = 0; i < 4; i++) {

          int num = rand() %4 ;
          printf("%c\n", cartas[num]);  
                   

        }

};













/*


verificarPar();
verificarVitoria();
*/