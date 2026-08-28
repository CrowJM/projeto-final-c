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

#define TAM 4


//prototipos ou funções auxiliares
int escolherCarta(int *linha1,int *linha2, int *coluna1, int *coluna2);
void randomcartas(void);




//main
int main(void) {

//variaveis
char nome[20];
int linha1, linha2, coluna1, coluna2, cartas;


//inicio do jogo
printf("========================\n");
printf("    JOGO DA MEMORIA     \n");
printf("========================\n");

printf("Nome do jogador: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = 0;  // -> para que remover o ultimo \n que é colocando quando carrego no enter


printf("\nBem-vindo, %s!\n", nome);



//criar tabela
char tabu[4][4];   
printf("\n   1 2 3 4\n");

    for (int linha = 0; linha < 4; linha++) {

            printf("%d  ", linha + 1);
            
        for (int coluna = 0; coluna < 4; coluna++){
                
            tabu[linha][coluna] = '?';
            printf("%c ", tabu[linha][coluna]);
                
        }

        printf("\n");
    }

//verificação





//funções
randomcartas();
escolherCarta(&linha1, &linha2, &coluna1, &coluna2);

};






//funções auxiliares



//escolha da carta
int escolherCarta(int *linha1,int *linha2, int *coluna1, int *coluna2) {
    printf("\nLinha 1: ");

        while (scanf("%d", linha1) != 1 || *linha1 < 1 || *linha1 > TAM){
            printf("Linha invalida! Escolhe entre 1 e 4: ");
            getchar();
            
            
        }

    printf("\nLinha 2: ");

        while (scanf("%d", linha2) != 1 || *linha2 < 1 || *linha2 > TAM){
            printf("Linha invalida! Escolhe entre 1 e 4: ");
            getchar();
            
            
        }

    printf("Coluna1: ");

        while (scanf("%d", coluna1) != 1 || *coluna1 < 1 || *coluna1 > TAM){
            printf("Coluna invalida! Escolhe entre 1 e 4: ");
            getchar();
            return 1;
            
        }

    printf("Coluna2: ");

        while (scanf("%d", coluna2) != 1 || *coluna2 < 1 || *coluna2 > TAM){
            printf("Coluna invalida! Escolhe entre 1 e 4: ");
            getchar();
            
            
        }

    getchar();
    



};



void randomcartas(void) {

    
    char cartas[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    srand(time(NULL));

    for (int linha = 0; linha < 4; linha++) {


        for (int coluna = 0; coluna < 4; coluna++) {

            int num = rand() % 8;


        }
    }
}


   


/*test
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

        };
       

};*/



/*int verificarVitoria(char tabu[4][4]){
int i;

    for (i = 0; i < 3; i++){
        if (tabu[i][0] != ' ' &&
            tabu[i][0] == tabu[i][1] &&
            tabu[i][1] == tabu[i][2] &&
            tabu[i][2] == tabu[i][3]){
            return 1;
        }
    }

    for (i = 0; i < 3; i++){
        if (tabu[0][i] != ' ' &&
            tabu[0][i] == tabu[1][i] &&
            tabu[1][i] == tabu[2][i] &&
            tabu[i][1] == tabu[i][2]){
            return 1;
        }
    }

    if (tabu[0][0] != ' ' &&
        tabu[0][0] == tabu[1][1] &&
        tabu[1][1] == tabu[2][2] &&
        tabu[i][1] == tabu[i][2]){
        return 1;
    }

    if (tabu[0][2] != ' ' &&
        tabu[0][2] == tabu[1][1] &&
        tabu[1][1] == tabu[2][0] &&
        tabu[i][1] == tabu[i][2]){
        return 1;
    }

    return 0;
}*/













/*criar tabela
void mostrarTabuleiro(void)  {
    // Função para mostrar o tabuleiro
    char tabu[4][4];

    
    printf("\n   1 2 3 4\n");

        for (int linha = 0; linha < 4; linha++) {

               printf("%d  ", linha + 1);
            
            for (int coluna = 0; coluna < 4; coluna++){
                
                tabu[linha][coluna] = '?';
                printf("%c ", tabu[linha][coluna]);
                
            }

            printf("\n");
        }
       

};

verificarPar();
verificarVitoria();
*/