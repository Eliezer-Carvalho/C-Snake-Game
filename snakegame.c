#include <stdio.h>


int main() {

const int altura = 11;
const int largura = 21;
const int posicao_cobra_altura = altura / 2;
const int posicao_cobra_largura = largura / 2;


for (int i = 0; i < altura; i++) {
    for (int j = 0; j < largura; j ++) {

        if (i == 0 || i == altura - 1)
            printf(" # ");

        else if (i == posicao_cobra_altura && j == posicao_cobra_largura)
            printf(" o ");


        else if (j == 0 || j == largura - 1)
            printf(" # ");

        else    
            printf("   ");
    }
    printf ("\n");
}

    return 0;
}
