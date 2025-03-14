#include <stdio.h>

//Recursivo do Bispo
void movb(int n){
    if (n <= 5 )
    {
        printf("\nDireita");
        printf("\nCima");
        movb(n + 1);        
    }
    
}

//Recursivo da Torre
void movt(int m){
    if (m <= 5)
    {
        printf("\nDireita");
        movt(m + 1);
    }
    
}

//Recursivo da Rainha
void movr(int o){
    if (o <= 8)
    {
        printf("\nEsquerda");
        movr(o + 1);
    }
    
}

int main() {
    //declaração de variáveis
    int casaB = 1, casaT = 1, casaR = 1;

    //Movimentação do Bispo
    printf("Movimentação do bispo: \n");
    movb(casaB);

    //Movimentação da Torre
    printf("\n\nMovimentação da Torre: \n");
    movt(casaT);

    //Movimentação da Rainha
    printf("\n\nMovimentação da Rainha: \n");
    movr(casaR);
    
    //Movimentação do Cavalo
    printf("\n\nMovimentação do Cavalo: \n");
    for (int casaC = 0, casaC2 = 0; casaC <= 1, casaC2 <= 1; casaC++, casaC2++)
    {
        if(casaC <= 1){
            printf("Cima\n");
        }
        if(casaC2 == 0){
            continue;
        }
        if (casaC2 <= 1)
        {
            printf("Direita\n");
        }
        
    }
    return 0;
}
