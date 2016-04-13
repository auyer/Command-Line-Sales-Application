//
//  salesApplication.h
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#ifndef salesApplication_h
#define salesApplication_h



#endif /* salesApplication_h */

typedef struct
{
    char name[50];
    int age;
    char _id[15];
    int reg;
    
    
} listEmpl; // Declaraçao do tipo de estrutura usada para armazenar os Funcionarios

typedef struct
{
    char name[50];
    int _id;
    int amount;
    float price;
    int minAmount;
    
} listProducts; // Declaracao do tipo de estrutura usada para armazenar os Materiais

void controll();
//Abre o programa. Controla a abertura, reabertura e fechamento do menu.
//Finaliza o programa com os agradecimentos. Nao há entradas ou saidas de dados.
//Autor: Rafael Passos


int menu();
//Chama o menu com as funçoes do programa
//Sem entrada nem saida
//Autor: Rafael Passos



int enrollEmployee();
//cadastro de funcionario
//retorna 1 se o cadastro foi efetuado, 0 se falhou
//Autor: Rafael Passos

int emplSearch();
//consulta de funcionario
//Entrada: struct de cadastro de funcionarios
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Rafael Passos

int addProduct();
//cadastra os materiais
//retorna 1 se o cadastro foi efetuado, 0 se falhou
//Autor: Felipe Ministerio

int editProduct();
//alteracao de materiais
//retorna 1 se a alteracao foi bem sucedida, 0 se falhou
//Autor: Felipe Ministerio


int productSearch_id();
//consulta de materiais por _idigo
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Felipe Ministerio

int productSearch_name();
//consulta de materiais por descricao
//retorna se a consulta foi bem sucedida, 0 se falhou
//Autor: Pedro Hartmann

int saleSystem();
//controll de vendas (Nota fiscal e consietencia de estoque)
//Imprime uma nota fiscal na tela
//Autor: Pedro Hartmann


int lowAmount();
//lista de produtos abaixo do estoque
//retorna 1 se a consulta foi bem sucedida
//Autor: Pedro Hartmann