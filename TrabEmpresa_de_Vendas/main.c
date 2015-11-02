//
//  main.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "programaVendas.h"
#include "EntradaSaida.h"



int main(int argc, const char * argv[]) {
     typedef struct cadFuncionario
    {
        char nome[50];
        int idade;
        char cpf[15];
        int matricula;
        struct cadFuncionario* prox;
        
        
    } listaFuncionarios;
    
    typedef struct cadMaterial
    {
        char nome[50];
        int cod;
        int quantidade;
        float valor;
        struct cadMaterial* prox;
        
        
    } listaMateriais;
    char parada;
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.txt", "a")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        return 0;
    }
    fclose(arquivoDf);
    FILE *arquivoDm;
    if((arquivoDm = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.txt", "a")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        return 0;
    }
    fclose(arquivoDm);
    //listaFuncionarios* funcionarios= NULL;
    //listaMateriais* materiais= NULL;

    controle();
    return 0;
}





