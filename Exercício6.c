#include<stdio.h>

main(){

/* 6- Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.*/

//informação inicial
printf("Conjunto dos inteiros pares");

//variáveis
int num, x =2, result = 0;

//entrada do dado
printf("\n Digite um numero qualquer:");
scanf("%d", &num);

//operação e saída
if(num % x == result){
    printf("O numero %d e par.", num);
}

}