#include <stdio.h>

void printa(float valor) {
    printf("%f\n", valor);
}

void calculadora (float n, char op, float m) {
    switch(op){
        case '+':
            printa(n+m);
            break;
        case '-':
            printa(n-m);
            break;
        case '*':
            printa(n*m);
            break;
        case '/':
            printa(n/m);
            break;
        default:
            printf("Invalida");
    }
}

void main () {
    char op;
    float n, m;

    scanf("%f %c %f", &n, &op, &m);

    calculadora(n, op, m);
}