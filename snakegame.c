#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {

const int altura = 11;
const int largura = 21;
int posicao_cobra_altura = altura / 2;
int posicao_cobra_largura = largura / 2;
char tecla;

while (1) {

    system("cls"); /* clear, limpa para receber um novo input todas as vezes*/
    printf("Use W, A, S, D para mover a cobra! \n");

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j ++) {

            if (i == 0 || i == altura - 1) 
                printf(" # "); /* EIXO DAS LINHAS */
            
            else if (i == posicao_cobra_altura && j == posicao_cobra_largura) 
                printf(" o "); /* POSIÇÃO INICIAL DA COBRA QUE É O CENTRO DO TABULEIRO */
            

            else if (j == 0 || j == largura - 1) 
                printf(" # "); /* EIXO DAS COLUNAS */
            
            else 
                printf("   "); /* VAZIO DENTRO DA TABELA  */
        
        }
        printf ("\n");
    }

    
    tecla = getch();

    if (tecla == 'w') posicao_cobra_altura--;
    if (tecla == 's') posicao_cobra_altura++;
    if (tecla == 'a') posicao_cobra_largura--;
    if (tecla == 'd') posicao_cobra_largura++;
    if (tecla == 'b') break;

    if (posicao_cobra_altura == 0 || posicao_cobra_altura == altura - 1 || posicao_cobra_largura == 0 || posicao_cobra_largura == largura - 1) {
        printf("Terminou o jogo! :)");
        break; 
    }

}

return 0;

}
