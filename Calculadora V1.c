#include <stdio.h>

int main(void) {

  //Começo criando as variaveis que vamos usar no decorrer do programa
  int Valor1, Valor2, Soma;

  //Aqui o programa exibe alguns informações para o usuário
  printf("Calculadora Versão 1\n");
  printf("Esse programa tem como objetivo realizar calculos basicos de soma\n");
  printf("Feito por: Yuri1502, Matricula: 123456789\n");

  //Nesse momnto o programa pede ao usuário para digitar o primeiro valor
  printf("Digite o primeiro valor: ");
  //Aqui o programa lê o valor digitado pelo usuário e armazena na variavel Valor1
  scanf("%d", &Valor1);
  
  //Nesse momnto o programa pede ao usuário para digitar o segundo valor
  printf("Digite o segundo valor: ");
  //Aqui o programa lê o valor digitado pelo usuário e armazena na variavel Valor2
  scanf("%d", &Valor2);

 //Aqui o programa realiza a soma dos valores digitados pelo usuário e armazena na variavel Soma
  Soma = Valor1 + Valor2;

  //Nesse momento o programa exibe o resultado da soma
  printf("A soma de %d e %d é igual a %d", Valor1, Valor2, Soma);

  //Por fim finalizamos o programa com o comando de retorno
  return 0;
}