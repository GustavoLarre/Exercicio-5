#include<stdio.h>

main(){

/* 9-  Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.*/

//informação inicial
printf("software do Rh");

//variáveis
float sal, reajuste, time, bonus, salN;
int cod;

//entrdada dos dados
printf("\n Informe o seu salario:");
scanf("%f", &sal);
printf("\n Informe o tempo de servico:");
scanf("%f", &time);

if(sal <= 2000){
    cod = sal / 100;
} else if(sal > 2000){
    cod = 21;
}

if(time < 1){
    bonus =0;
} else if(time >= 1 && time <= 3){
    bonus = 100;
} else if(time >= 4 && time <= 6){
    bonus = 200;
} else if(time >= 7 && time <= 10){
    bonus = 300;
} else if(time >= 10){
    bonus = 500;
}

//operações e saída
switch(cod){
    case 5:
    reajuste = sal * 0.25;
    break;

    case 10:
    reajuste = sal * 0.20;
    break;

    case 15:
    reajuste = sal * 0.15;
    break;

    case 20:
    reajuste = sal * 0.10;
    break;

    case 21:
    reajuste = 0;
    break;

    default:
    printf("Erro 402");

}

salN = sal + reajuste + bonus;
printf("\n O seu salario era %.2f e voce teve um bonus por tempo de servico de %.2f e um reajuste de %.2f.", sal, bonus, reajuste);
printf("\n O seu salario atual e de %2.f", salN);

}