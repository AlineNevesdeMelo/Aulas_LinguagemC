// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int n1, n2, total;

    //Informar os dois valores - Procedimento de Entrada
    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &n1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &n2);

    //Opera��o matem�tica - Processamento
    total=n1+n2;

    //Mostrar o valor total - Processamento de Sa�da
    printf("Soma: %i", total);

    //Segura o programa executando
    getch();
    return 0;
}
