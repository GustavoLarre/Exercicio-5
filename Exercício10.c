#include<stdio.h>
#include<math.h>

main(){

/* 10- Calcule as raízes da euqação do 2° grau.*/

//informação inicial
printf("Calculadora da equacao do 2 grau");

//variáveis
float a, b, c, delta, x1, x2;

//entrada dos dados
printf("\n Digete o valor de A:");
scanf("%f", &a);
printf("\n Digite o valor de B:");
scanf("%f", &b);
printf("\n Digite o valor de C:");
scanf("%f", &c);

//operação e saída
if( a == 0){
    printf("\n Nao e equacao do 2 grau");
}else{
    delta = pow(b,2) - 4 * a * c;
    if(delta < 0){
        printf("\n Nao existe raiz real");
    } else if(delta == 0){
        x1 = (- b + sqrt(delta)) / (2 * a);
        printf("\n Raiz unica: %.2f", x1);
    }else{
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("\n Duas raizes reais x1: %.2f, x2: %.2f", x1, x2);
    }
}

}