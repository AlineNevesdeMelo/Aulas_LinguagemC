// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    //Declara��o do tamanho do vetor
    char nome[50];

    //Procedimento de entrada de dados
    printf("Nome da pessoa:\n");
    gets(nome);

    //Procedimento de sa�da de dados
    printf("Nome digitado �: %s", nome);

    //Segura o programa no ar
    getch();
    return 0;
}
