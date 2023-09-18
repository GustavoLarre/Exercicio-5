#include<stdio.h>

main(){

/* 8- Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos; • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

//informação inicial
printf("Software INSS");

//variáveis
float idade, tempoT;

//entrada dos dados
printf("\n Informe a sua idade em anos:");
scanf("%f", &idade);
printf("\n Informe o seu tempo de contribuicao:");
scanf("%f", &tempoT);

//operações e saída
if(tempoT >= 30){
    printf("Voce pode se aposentar.");
} else if(idade >= 65){
    printf("Voce pode se aposentar.");
} else if(idade >= 60 && tempoT >= 25){
    printf("Voce pode se aposentar.");
} else if(idade < 64 || tempoT < 24){
    printf("Voce nao pode se aposentar");
}

}