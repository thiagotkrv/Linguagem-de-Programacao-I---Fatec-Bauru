#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
struct cliente {
    int codigo, rg;
    char nome[50];
};
 
cliente cadastro_cliente;
 
void menu();
void exibir();
void cadastrar();
 
int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}
 
void menu()
{
    int opcao;
    do
    {
        printf(" \n Op��es: ");
        printf(" \n 1. Exibir Cadastro" );
        printf(" \n 2. Cadastrar Cliente" );
        printf(" \n 3. Para sair. \n " );
        printf(" \n Digite a op��o desejada: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                exibir();
            break;
            case 2:
                cadastrar();
            break;   
            default:
                 printf(" \n Op��o n�o existente. ");
            break;
        }
    }
    while(opcao!=3);
}
 
void cadastrar()
{
    printf(" Digite o c�digo do cliente: ");
    scanf("%d", &cadastro_cliente.codigo);
    printf(" Digite o nome do cliente: ");
    scanf("%s", &cadastro_cliente.nome);
    printf(" Digite o RG do cliente: ");
    scanf("%d", &cadastro_cliente.rg);
}
 
void exibir()
{
    printf(" \n C�digo: %d ", cadastro_cliente.codigo);
    printf(" \n Nome: %s ", cadastro_cliente.nome);
    printf(" \n RG: %d ", cadastro_cliente.rg);
    printf(" \n \n");
}
