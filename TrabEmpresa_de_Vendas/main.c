//
//  main.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//
//Autor: Rafael Passos

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
        
        
    } listaFuncionarios; //Declaraçao do struct de funcionarios
    
    typedef struct cadMaterial
    {
        char nome[50];
        int cod;
        int quantidade;
        float valor;
        int estqMinimo;
        
    } listaMateriais;  //Declaraçao do struct de materiais
    
    char parada;
    
    FILE *arquivoDf; // Criaçao e/ou teste do arquivo de Funcionarios
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "rb")) == NULL){ //teste de exitencia
        if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "wb"))    == NULL){ //teste de erro na criaçao
            printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
            scanf("%c", &parada);
            fflush(stdin);
            return 0;
    }
}
    fclose(arquivoDf);
    
    FILE *arquivoDm; // Criaçao e/ou teste do arquivo de Materiais
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin", "rb")) == NULL){ //Teste de existencia
        if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin", "wb"))    == NULL){ // Teste de erro na criaçao
            printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
            scanf("%c", &parada);
            fflush(stdin);
            return 0;
        }
    }
    
    fclose(arquivoDm);


    controle();
    return 0;
}





