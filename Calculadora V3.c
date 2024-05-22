#include <stdio.h>

int main(void) {

  //Começo criando as variaveis que vamos usar no decorrer do programa
  int Valor1, Valor2, Soma, Subtracao, Multiplicacao, Divisao, Opcao;
  char Continue[1];

  //Aqui o programa exibe alguns infrmações para o usuário
  printf("Calculadora Versão 3\n");
  printf("Esse programa tem como objevo realizar calculos basicos. Após cada calculo o programa pergunta se o usuário deseja fazer outra operação\n");
  printf("Feito por: Yuri1502, Matricula: 123456789\n");

  //Nesse momnto o programa pede ao usuário para digitar o primeiro valor
  printf("Digite o primeiro valor: ");
  //Aqui o programa lê o valor digitado pelo usuário e armazena na variavel Valor1
  scanf("%d", &Valor1);

  //Nesse momnto o programa pede ao usuário para digitar o segundo valor
  printf("Digite o segundo valor: ");
  //Aqui o programa lê o valor digitado pelo usuário e armazena na variavel Valor2
  scanf("%d", &Valor2);

  //Aqui inicia o loop do programa
  do{
    
    //Aqui o programa exibe as opções de calculos para o usuário
   printf("Escolha uma opção: \n");
   printf("1 - Soma\n");
   printf("2 - Subtração\n");
   printf("3 - Multiplicação\n");
   printf("4 - Divisão\n");

    //Aqui o programa lê a opção escolhida pelo usuário e armazena na variavel Opcao
   scanf("%d", &Opcao);

    //Aqui o programa verifica qual opção foi escolhida pelo usuário e executa a operação correspondente
    switch(Opcao){
      case 1:
       Soma = Valor1 + Valor2;
       printf("O resultado da soma de %d + %d = %d\n", Valor1, Valor2, Soma);
       break;
      case 2:
       Subtracao = Valor1 - Valor2;
       printf("O resultado da subtração de %d - %d = %d\n", Valor1, Valor2, Subtracao);
       break;
      case 3:
       Multiplicacao = Valor1 * Valor2;
       printf("O resultado da multiplicação de %d * %d = %d\n", Valor1, Valor2, Multiplicacao);
       break;
      case 4:
        if(Valor2 != 0){
          Divisao = Valor1 / Valor2;
          printf("O resultado da divisão de %d / %d = %d\n", Valor1, Valor2, Divisao);
        }
        else{
        printf("Não é possivel dividir por zero\n");
        }
      break;
    }
  //Aqui o programa pergunta ao usuário se ele deseja fazer outra operação
  printf("Deseja fazer outra operação? (S/N)\n");
  scanf("%s", Continue);
  }while(Continue[0] == 'S'|| Continue[0] == 's');

  //Por fim finalizamos o programa com o comando de retorno
  return 0;
}