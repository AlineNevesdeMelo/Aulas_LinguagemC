#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    //Vari�vel com valores positivos
    unsigned int n;

    //Procedimento - Entrada de Dados
    printf("Digite o n�mero ");
    scanf("%u", &n);

    //Procedimento - Sa�da de Dados
    printf("N�mero: %u\n", n);

    //Caso a vari�vel n assuma algum dos casos abaixo.
    switch(n)
    {
        case 0:
        {
            printf("Voc� digitou o n�mero 0");
            break;
        }
        case 1:
        {
            printf("Voc� digitou o n�mero 1");
            break;
        }
        case 2:
        {
            printf("Voc� digitou o n�mero 2");
            break;
        }
        case 3:
        {
            printf("Voc� digitou o n�mero 3");
            break;
        }
        case 4:
        {
            printf("Voc� digitou o n�mero 4");
            break;
        }
        case 5:
        {
            printf("Voc� digitou o n�mero 5");
            break;
        }
    //Portanto, caso a vari�vel n n�o seja nenhum dos valores acima.
        default:
        {
            printf("N�mero fora da escala");
            break;
        }
    }
    getch();
}
