//
//  programaVendas.h
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#ifndef programaVendas_h
#define programaVendas_h



#endif /* programaVendas_h */

typedef struct cadFuncionario
{
    char nome[50];
    int idade;
    char cpf[15];
    int matricula;
    
    
} listaFuncionarios;

typedef struct cadMaterial
{
    char nome[50];
    int cod;
    int quantidade;
    float valor;
    int qntMinima;
    
} listaMateriais;

void controle();
//Abre o programa. Controla a abertura, reabertura e fechamento do menu.
//Finaliza o programa com os agradecimentos. Nao há entradas ou saidas de dados.
//Autor: Rafael Passos


int menu();
//Chama o menu com as funçoes do programa
//Sem entrada nem saida
//Autor: Rafael Passos



int cadastroFuncionario();
//cadastro de funcionario
//retorna 1 se o cadastro foi efetuado, 0 se falhou
//Autor: Rafael Passos

int consultaFuncionario();
//consulta de funcionario
//Entrada: struct de cadastro de funcionarios
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Rafael Passos

int cadastroMateriais();
//cadastra os materiais
//retorna 1 se o cadastro foi efetuado, 0 se falhou
//Autor: Felipe Ministerio

int alteracaoMaterial();
//alteracao de materiais
//retorna 1 se a alteracao foi bem sucedida, 0 se falhou
//Autor: Felipe Ministerio


int consultaMaterialCod();
//consulta de materiais por codigo
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Felipe Ministerio

int consultaMaterialDesc();
//consulta de materiais por descricao
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Pedro Hartmann

int controleVendas();
//controle de vendas (Nota fiscal e consietencia de estoque)
//Imprime uma nota fiscal na tela
//Autor: Pedro Hartmann


int estoqueAbaixoMinimo();
//lista de produtos abaixo do estoque
//retorna 1 se a consulta foi bem sucedida
//Autor: Pedro Hartmann