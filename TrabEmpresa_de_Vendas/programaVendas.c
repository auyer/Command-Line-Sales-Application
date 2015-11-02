//
//  programaVendas.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "programaVendas.h"
#include "EntradaSaida.h"


void controle( listaFuncionarios* funcionarios, listaMateriais* materiais){
    char loja[50];
    *loja= *entradaString("\nDigite o nome do estabelecimento: ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //system("cls");
    int x;
    do{
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        //system("cls");
        x= menu(funcionarios, materiais);
    }while (x==1);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //system("cls");
    //Procurar outras funçoes
    printf("\n------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n- - - - -Obrigado por usar nosso programa! - - -  - - ");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n Atutores:\n  >> Rafael 'Auyer' Passos \n  >> Felipe 'Kurishiro' Ministerio\n  >> Pedro 'Kyrie' Hartmann");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n Digite qualquer tecla para continuar");
    fflush(stdin);
    getchar();
}

int menu(listaFuncionarios* funcionarios, listaMateriais* materiais){
    int escolha;
    printf("\n------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n 1 - Cadastrar Novo Funcionario");
    printf("\n\n 2 - Consultar Funcionarios");
    printf("\n\n 3 - Cadastrar Produtos");
    printf("\n\n 4 - Alterar Dados de Produtos");
    printf("\n\n 5 - Consultar materiais por código");
    printf("\n\n 6 - Consultar materiais por Descriçao");
    printf("\n\n 7 - Controle de vendas");
    printf("\n\n 8 - Listar Materiais Abaixo do Estoque");
    printf("\n\n 9 - Sair");
    printf("\n\n\n-----------------Digite Sua Opcao----------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - \n");


    escolha=entradaInt("\n\nDigite Sua Opçao: ");
    switch(escolha){
        case 1:
            return cadastroFuncionario( &funcionarios);
            //cadastro de funcionario
            break;
        case 2:
            return consultaFuncionario( funcionarios);
            //consulta de funcionario
            break;
        case 3:
            //cadastroMateriais();
            //cadastra os materiais
            break;
        case 4:
            //alteracaoMaterial();
            //alteracao de materiais
            break;
        case 5:
            //consultaMaterialCod();
            //consulta de materiais por codigo
            break;
        case 6:
            //consultaMaterialDesc();
            //consulta de materiais por descricao
            break;
        case 7:
           // controleVendas();
            //controle de vendas (Nota fiscal e consietencia de estoque)
            break;
        case 8:
            // estoqueAbaixoMinimo();
            //lista de produtos abaixo do estoque
            break;
        default:
            if ( escolha != 9){
                printf("\nOpcao incorreta, escolha novamente");
                printf("\n\n Digite qualquer tecla para continuar");
                fflush(stdin);
               // getch();
                return 1;
            }else{
                return 9;
            }
    }
    return 1;
}

int cadastroFuncionario(listaFuncionarios **funcionarios){
    char parada;
    printf("\n\n - - -Cadastro de Funcionario- - -");
    if(*funcionarios == NULL){
        listaFuncionarios* novoElemento= (listaFuncionarios*)malloc(sizeof(listaFuncionarios));
        strcpy(novoElemento->nome,entradaString("\nDigite o nome do Funcionario: "));
        novoElemento->idade= entradaInt("\nDigite a idade do Funcioario: ");
        strcpy(novoElemento->cpf,entradaCPF("\nDigite o CPF do funcionario: "));
        novoElemento->matricula=1;
        novoElemento->prox=NULL;
        funcionarios= &novoElemento;
        
    }else{
        listaFuncionarios* novoElemento = (listaFuncionarios*)malloc(sizeof(listaFuncionarios));
        strcpy(novoElemento->nome,entradaString("\nDigite o nome do Funcionario: "));
        novoElemento->idade= entradaInt("\nDigite a idade do Funcioario: ");
        strcpy(novoElemento->cpf,entradaCPF("\nDigite o CPF do funcionario: "));
        //
        // Como acessar a matricula do funcionario que ocupa a posiçao anterior da lista? ( novoElemento->matricula= matriculaDoAnterior++;)
        //
        novoElemento->prox=NULL;
        
        listaFuncionarios* p;
        for( p = funcionarios; p->prox !=NULL; p=p->prox){
            p->prox=novoElemento;
        }
    }
    printf("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    scanf(" %c", &parada);

    
    
    return 1;
}

int consultaFuncionario(listaFuncionarios* funcionarios){
    char parada;
    printf("\n\n - - -Consulta de Funcionario- - -");
    int valor= entradaInt("\nDigite a matricula do funcionario que deseja buscar: ");
    if(funcionarios== NULL){
        printf("\nNenhum Funcionario cadastrado. Cadastre funcionarios no menu principal opçao 1\nDigite qualquer tecla para continuar");
        scanf(" %c", &parada);
        return 1;
    }else{
        listaFuncionarios* p;
        for(p=funcionarios; p!=NULL && p->matricula!=valor; p=p->prox);
            if(p==NULL){
                printf("\nMatricula inexistente");
                printf("\nDigite qualquer tecla para continuar\n");
                scanf(" %c", &parada);
                return 1;
            }else{
                printf("\n Nome: %s", p->nome);
                printf("\n Idade: %d", p->idade);
                printf("\n CPF: %s", p->cpf);
                printf("\n Matricula: %d", p->matricula);
        }
    }

    printf("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    scanf(" %c", &parada);
    return 1;
}
