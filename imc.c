
#include<stdio.h>

int main(){

int idade;
float peso,altura,imc;
char nome[50];

printf("Qual o seu nome?");
scanf("%s", nome);

printf("Qual o seu peso?");
scanf("%f",&peso);

printf("Qual a sua altura?");
scanf("%f",&altura);

imc = peso/(altura*altura);

//printf("altura: %f peso: %.2f",altura,peso);
printf("\nOla %s, seu imc e %.2f",nome, imc);


if(imc<18.5){
    printf("\nbaixo peso");
}else if(imc>=18.5 && imc<25){
    printf("\npeso normal");
}else if(imc>=25 && imc<30){
    printf("\nsobrepeso");
}else{
   printf("\nobesidade");
}

return 0;
}
