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
#include "salesApplication.h"
#include "InputOutput.h"



int main(int argc, const char * argv[]) {
    
    FILE *employeesFIle; // Criaçao e/ou teste do arquivo de Funcionarios
    if((employeesFIle = fopen("df.bin", "rb")) == NULL){ //teste de exitencia
        if((employeesFIle = fopen("df.bin", "ab"))    == NULL){ //teste de erro na criaçao
            inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
            fflush(stdin);
            return 0;
        }
    }
    fclose(employeesFIle);
    
    FILE *productsFile; // Criaçao e/ou teste do arquivo de Materiais
    if((productsFile = fopen("dm.bin", "rb")) == NULL){ //Teste de existencia
        if((productsFile = fopen("dm.bin", "ab"))    == NULL){ // Teste de erro na criaçao
            inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
            fflush(stdin);
            return 0;
        }
    }
    
    fclose(productsFile);
    
    
    controll();
    return 0;
}





