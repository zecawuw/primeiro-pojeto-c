#include <stdio.h>
#include <stdlib.h>

int main(){

    // int hora_cinema = 20;
    // int hora_atual = 20;

    // if(hora_atual > hora_cinema + 30){
    //     printf("Passou do tempo limite! nao pode entrar \n");
    // }else if(hora_atual < hora_cinema -30){
    //     printf("Nem abriu a porta do cinema \n");
    // }else if(hora_atual == hora_cinema){
    //     printf("Pode entrar no cinema \n");
    // }

   //*****************************************************************************************************
    
    // int contador = 1;
    // int limite = 10;

    // while (contador < limite)
    // {
    //     printf("estamos no primeiro loop\n");
    //     if (contador == 3);
    //     {
    //         int contador_2 = 5;
    //         while(contador_2 > 0){
    //             printf("estamos no segundo loop\n");
    //             contador_2--;


    //         }
    //     }
        
    //     contador++;
    // }
    
    //**********************************************************************************************

    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("\nQual seu primeiro nome?\n");

    scanf("%s",nome);

    printf("\n Legal %s... Qual seu sobrenome? \n",nome);

    scanf("%s",sobrenome);

    // printf("\nShow de bola %s %s ... Qual sua idade?\n",nome,sobrenome);

    // scanf("%d",&idade);

    printf("\n%s %s Qual o ano do seu nascimento?\n",nome,sobrenome);

    scanf("%d",&ano_nascimento);

    // if (idade < 18)
    // {
    //     printf("\nSinto muito %s %s mas so aceitamos maiores de idade! :(\n",nome,sobrenome);
    // }else if(idade >= 18){
    //     printf("%s %s seja bem vindo! :)\n",nome,sobrenome);
    // }
    
     if (ano_nascimento < 2021 -18)
    {
        printf("%s %s seja bem vindo! :)\n",nome,sobrenome);
    }else
    {
        printf("\nSinto muito %s %s apenas aceitamos maiores de idade! :(\n",nome,sobrenome);

    }
    
    
    


}