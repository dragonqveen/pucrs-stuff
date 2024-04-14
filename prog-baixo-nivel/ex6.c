/*
Faça um programa em C que calcule o índice de massa corporal (IMC). Esse programa deve ficar em loop (do-while), aguardando se quer calcular o IMC ou não (s-sim ou n-não).
Se for escolhido a opção ‘s’, o programa deve solicitar ao usuário peso e altura. Estes dados lidos na main devem ser passados para uma função que deve retornar para a main o valor do IMC. Outra função deverá receber o valor do IMC e escrever em uma variável global do tipo char a classificação. Na main deverá informar ao usuário o IMC (retorno da primeira função) e a classificação que foi escrita na variável global.
*/

#include <stdio.h>
#include <string.h>

char classifica[50] = "";

float calcula_imc(float peso, float altura) {
    return peso / (altura * altura);
}

void categoria_imc(float imc) {
    if(imc > 40) {
        strcpy(classifica, "Obesidade Grau III");
    } else if (imc <= 40 && imc >= 35) {
        strcpy(classifica, "Obesidade Grau II");
    } else if (imc < 35 && imc >= 30) {
        strcpy(classifica, "Obesidade Grau I");
    } else if (imc < 30 && imc >= 25) {
        strcpy(classifica, "Acima do Peso");
    } else if (imc < 25 && imc >= 18.5) {
        strcpy(classifica, "Peso Normal");
    } else if (imc < 18.5 && imc >= 17) {
        strcpy(classifica, "Abaixo do Peso");
    } else {
        strcpy(classifica,"Muito Abaixo do Peso");
    }

    printf("IMC: %.2f\n", imc);
    puts(classifica);
}

void main() {
    char resposta;
    float peso, altura;

    do {
        printf("\nDeseja calcular o IMC? s-sim | n-nao\n");
        scanf(" %c", &resposta);

        if(resposta == 's') {
            printf("Digite seu peso: ");
            scanf(" %f", &peso);

            printf("Digite sua altura: ");
            scanf(" %f", &altura);

            categoria_imc(calcula_imc(peso, altura));
        }

    } while(resposta != 'n');
}