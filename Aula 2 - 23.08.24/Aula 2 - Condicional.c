// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int n1, n2, r;

    //Informar os dois valores - Procedimento de Entrada
    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &n1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &n2);

    //Opera��o matem�tica - Processamento
    r=n1+n2;

    //Procedimento de Sa�da de Dados
    printf("Resultado: %i \n", r);

    /*    Condicional - Sendo que Vari�vel r for maior ou igual 10, ent�o condi��o � verdadeira. */
    if (r>10){
        //Procedimento de Sa�da - Mostra a Mensagem
        printf("N�mero Maior que 10");
    }
    /* Caso a vari�vel n�o seja maior ou igual 10, ent�o condi��o � falsa, e assim, execitar� os comandos que est�o abaixo do else */
    else if (r<10){
        //Procedimento de Sa�da - Mostra a Mensagem.
        printf("N�mero Menor que 10");
    }
    else{
        printf("N�mero igual a 10");
    }
    //Segura o programa executando
    getch();
    return 0;
}
