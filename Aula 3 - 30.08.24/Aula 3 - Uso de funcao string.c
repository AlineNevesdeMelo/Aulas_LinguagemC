#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
    int x;
    char curso[100];
    printf("Nome do curso: \n");
    gets(curso);
    x=strcmpi(curso,"Analise e Desenvolvimento de Sistemas");
    printf("%i \n",x);

    if (strcmpi(curso,"Analise e Desenvolvimento de Sistemas")==0)
    {
    printf("Nome do curso invertido: %s",strrev(curso));
    }
    getch();
}
