// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declara��o das vari�veis
    int n1, n2, n3;
    float media;

    //Entrada de Dados
    printf("Digite a primeira nota:\n");
    scanf("%i", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%i", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%i", &n3);

    //Opera��o matem�tica - Processamento
    media=(n1+n2+n3)/3;

    //Sa�da de Dados
     printf("A m�dia das notas �:%.2f \n",media);

     //Estrutura Condicional
     if (media>=7){
        printf("Aprovado");
     }
     else if(media>=5){
        printf("Recupera��o");
     }
     else {
        printf("Reprovado");
     }
     getch();
     return 0;
}
