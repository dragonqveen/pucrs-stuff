#include <stdio.h>

void printa(int qtde, int valor) {
    printf("%d notas de %d\n", qtde, valor);
}

int calc_cedula(int valor, int cedula){
    int qtde_cedula = valor / cedula;
    if(valor >= cedula) {
        printa(qtde_cedula, cedula);
        valor = valor - (qtde_cedula * cedula);
    }

    return valor;
}

void calc_cedulas(int valor) {
    calc_cedula(
        calc_cedula(
            calc_cedula(
                calc_cedula(
                    calc_cedula(valor, 100), 
                50), 
            20),
        10),
    5);
}

void main(){
    int valor;

    scanf("%d", &valor);

    if (valor % 5 != 0){
        printf("Opcao invalida\n");
        return;
    }

    calc_cedulas(valor);
}