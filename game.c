/*
Game  Memoria || Pares
jose miranda

*/
//bibliotecas

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4


//prototipos ou funções auxiliares
int escolherCarta(int *linha1, int *linha2, int *coluna1, int *coluna2);
void randomcartas(char tabu[TAM][TAM]);




//main

int main(void) {

//variaveis
char nome[20];
char tabu[TAM][TAM];
char carta[TAM][TAM];
int linha1, linha2, coluna1, coluna2;
int continuar = 1; //continuar = ideia temporaria

//inicio do jogo
printf("========================\n");
printf("=   JOGO DA MEMORIA!   =\n");
printf("========================\n");

printf("Nome do jogador: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("\nBem-vindo, %s!\n", nome);


//colocar as letras aleatorias
randomcartas(tabu);


//enquanto o jogador quiser continuar
while (continuar > 0) {


//mostrar o tabuleiro 
printf("\n   1 2 3 4\n");
for (int linha = 0; linha < TAM; linha++) {
    printf("%d  ", linha + 1);
    for (int coluna = 0; coluna < TAM; coluna++) {
        carta[linha][coluna] = '?';   
        printf("%c ", carta[linha][coluna]);    
    }
    printf("\n");
}

    


//escolher as duas cartas
 escolherCarta(&linha1, &linha2, &coluna1, &coluna2);

printf("\nCarta 1: %c\n", tabu[linha1 - 1][coluna1 - 1]);
printf("Carta 2: %c\n", tabu[linha2 - 1][coluna2 - 1]);

carta[linha1 - 1][coluna1 - 1] = tabu[linha1 - 1][coluna1 - 1];
carta[linha2 - 1][coluna2 - 1] = tabu[linha2 - 1][coluna2 - 1];



//verificar 
if (tabu[linha1 - 1][coluna1 - 1] == tabu[linha2 - 1][coluna2 - 1]) {
    printf("Par encontrado, %s!\n", nome);
    continue;
}

else {
    printf("Azar!\n");
    printf("Proximo, %s!\n", nome);
    continue;
}



//temporario 
 printf("\nContinuar? 1-Sim / 0-Nao: ");
scanf("%d", &continuar);


}

    return 0;

}





//funções auxiliares
//escolha da carta
int escolherCarta(int *linha1, int *linha2, int *coluna1, int *coluna2) {

 
    printf("\nLinha 1: ");
    while (scanf("%d", linha1) != 1 || *linha1 < 1 || *linha1 > TAM) {
        printf("Linha invalida! Escolhe entre 1 e 4: ");
        getchar();
    }
   
    printf("Coluna 1: ");
    while (scanf("%d", coluna1) != 1 || *coluna1 < 1 || *coluna1 > TAM) {
        printf("Coluna invalida! Escolhe entre 1 e 4: ");
        getchar();

    }
   
    printf("Linha 2: ");
    while (scanf("%d", linha2) != 1 ||*linha2 < 1 || *linha2 > TAM) {
        printf("Linha invalida! Escolhe entre 1 e 4: ");
        getchar();

    }
  
    printf("Coluna 2: ");
    while (scanf("%d", coluna2) != 1 || *coluna2 < 1 || *coluna2 > TAM) {
        printf("Coluna invalida! Escolhe entre 1 e 4: ");
        getchar();

    }

    getchar();
    return 1;

}

//atribuicao de cartas aleatorias
void randomcartas(char tabu[TAM][TAM]) {
char cartas[8] = {'A', 'B', 'C', 'D','E', 'F', 'G', 'H'};

    srand(time(NULL));
    for (int linha = 0; linha < TAM; linha++) {

        for (int coluna = 0; coluna < TAM; coluna++) {
            int num1 = rand() % 8;
            tabu[linha][coluna] = cartas[num1];

        }

    }

}



//mostar escolha
void showcarts(char tabu[TAM][TAM]) {




}