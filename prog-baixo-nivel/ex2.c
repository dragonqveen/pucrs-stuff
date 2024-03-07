#include <stdio.h>

// operação (tipo int), parcela_1 (tipo float) e parcela_2 (tipo float).

void printa(float valor) {
    printf("%f\n", valor);
}

void calculadora(int op, float n, float m){
    switch(op){
        case 0: 
            printa(n + m);
            break;
        case 1:
            printa(n - m);
            break;
        case 2:
            printa(n * m);
            break;
        case 3:
            printa(n / m);
            break;
    }
}

void main (){
    printf("Calculadora - Digite a operacao e 2 valores\n");
    int op;
    float n, m;

    scanf("%d", &op);
    scanf("%f", &n);
    scanf("%f", &m);

    if(op < 0 || op > 3) {
        printf("Invalido");
    }

    calculadora(op, n, m);
}