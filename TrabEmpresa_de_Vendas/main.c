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
    
    
    listaFuncionarios* funcionarios= NULL;
    listaMateriais* materiais= NULL;

    controle(  funcionarios,  materiais);
    return 0;
}





