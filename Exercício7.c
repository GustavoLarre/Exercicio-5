#include<stdio.h>

main(){

/* 7- Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos.*/

//informação inicial
printf("Resultado do processo seletivo");

//variáveis
float num1, num2, num3; 
double nota, notaF;

//entrada dos dados
printf("\n Insira a nota do aluno(a) na primeira prova:");
scanf("%f", &num1);
printf("\n Informe a nota do aluno(a) na segunda prova:");
scanf("%f", &num2);
printf("\n Digite a nota do aluno(a) na terceira prova:");
scanf("%f", &num3);

//operações e saída
nota = num1 + num2 + (num3 * 3);
notaF = nota / 5;

if(notaF >= 7){
    printf("Parabens a sua nota foi %.2lf e voce esta aprovado", notaF);
} else if(notaF <= 7){
    printf("A sua nota foi %.2lf e voce nao esta aprovado", notaF);
}

}