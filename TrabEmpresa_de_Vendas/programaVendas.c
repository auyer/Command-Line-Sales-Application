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


void controle( ){
    char loja[50], parada;
    *loja= *entradaString("\nDigite o nome do estabelecimento: ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //system("cls");
    int x;
    do{
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        //system("cls");
        x= menu();
    }while (x==1);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //system("cls");
    //Procurar outras funçoes
    printf("\n------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n- - - - -Obrigado por usar nosso programa! - - -  - - ");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n Autores:\n  >> Rafael 'Auyer' Passos \n  >> Felipe 'Kurishiro' Ministerio\n  >> Pedro 'Kyrie' Hartmann");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n Digite qualquer tecla para continuar");
    fflush(stdin);
    scanf(" %c", &parada);
    fflush(stdin);
}

int menu(){
    int escolha;
    char parada;
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
    printf("\n\n\n-----------------Digite Sua Opcao-----------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - \n");


    escolha=entradaInt("\n\nDigite Sua Opçao: ");
    switch(escolha){
        case 1:
            return cadastroFuncionario();
            //cadastro de funcionario
            break;
        case 2:
            return consultaFuncionario();
            //consulta de funcionario
            break;
        case 3:
            //return adastroMateriais();
            //cadastra os materiais
            break;
        case 4:
            //return alteracaoMaterial();
            //alteracao de materiais
            break;
        case 5:
            //return consultaMaterialCod();
            //consulta de materiais por codigo
            break;
        case 6:
            //return consultaMaterialDesc();
            //consulta de materiais por descricao
            break;
        case 7:
           // return controleVendas();
            //controle de vendas (Nota fiscal e consietencia de estoque)
            break;
        case 8:
            // return estoqueAbaixoMinimo();
            //lista de produtos abaixo do estoque
            break;
        default:
            if ( escolha != 9){
                printf("\nOpcao incorreta, escolha novamente");
                printf("\n\n Digite qualquer tecla para continuar");
                scanf(" %c", &parada);
                fflush(stdin);
               // getch();
                return 1;
            }else{
                return 9;
            }
    }
    return 1;
}

int cadastroFuncionario(){
    char parada, testeFDL, aux;
    int n=1;
    listaFuncionarios* elementoTeste;
    printf("\n\n\n-------------Cadastro de Funcionarios-------------");
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.txt", "a")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        fflush(stdin);
        return 0;
    }
    aux=fscanf(arquivoDf, "%c", & testeFDL);
    //aux=fscanf(arquivoDf, "%c", & testeFDL);
    for(int n=1; aux!=EOF; n++, aux=fread(elementoTeste,sizeof(listaFuncionarios),n, arquivoDf));
    
    fflush(arquivoDf);
    fseek(arquivoDf, n*sizeof(listaFuncionarios), SEEK_SET);
    
    
    listaFuncionarios* novoElemento= (listaFuncionarios*)malloc(sizeof(listaFuncionarios));
    strcpy(novoElemento->nome,entradaString("\nDigite o nome do Funcionario: "));
    novoElemento->idade= entradaInt("\nDigite a idade do Funcioario: ");
    strcpy(novoElemento->cpf,entradaCPF("\nDigite o CPF do funcionario: "));
    novoElemento->matricula=n;
    
    
    
    fwrite(novoElemento,sizeof(listaFuncionarios),1, arquivoDf);
    fflush(arquivoDf);
    
    //listaFuncionarios* novoElemento = (listaFuncionarios*)malloc(sizeof(listaFuncionarios));
    //strcpy(novoElemento->nome,entradaString("\nDigite o nome do Funcionario: "));
    //novoElemento->idade= entradaInt("\nDigite a idade do Funcioario: ");
    //strcpy(novoElemento->cpf,entradaCPF("\nDigite o CPF do funcionario: "));
    //
    // Como acessar a matricula do funcionario que ocupa a posiçao anterior da lista? ( novoElemento->matricula= matriculaDoAnterior++;)
    //
    //novoElemento->prox=NULL;
    
    // listaFuncionarios* p;
    //for( p = funcionarios; p->prox !=NULL; p=p->prox){
    //  p->prox=novoElemento;
    //}
    //for(int n=1; EOF!=fscanf(arquivoDf, &testeFDL) ; fseek(arquivoDf, n* sizeof(listaFuncionarios), SEEK_SET) ){
    // novoElemento->matricula=n;
    //}
    
    
    fclose(arquivoDf);
    printf("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    scanf(" %c", &parada);
    fflush(stdin);
    
    
    
    return 1;
}

int consultaFuncionario(){
    char parada, aux=1, testeFDL;
    printf("\n\n\n-----------Consulta de Funcionarios-----------");
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.txt", "a")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        fflush(stdin);
        return 0;
    }
    listaFuncionarios* elementoTeste;
    int valor= entradaInt("\nDigite a matricula do funcionario que deseja buscar: ");
    aux=fscanf(arquivoDf, "%c", & testeFDL);
    if(aux== EOF){
        printf("\nNenhum Funcionario cadastrado. Cadastre funcionarios no menu principal opçao 1\nDigite qualquer tecla para continuar");
        scanf(" %c", &parada);
        fflush(stdin);
        return 1;
    }
    
    
    for(int n=1; valor == elementoTeste->matricula || aux!=EOF; n++, aux=fread(elementoTeste ,sizeof(listaFuncionarios),n, arquivoDf));
    
            if(elementoTeste==NULL){
                printf("\nMatricula inexistente");
                printf("\nDigite qualquer tecla para continuar\n");
                scanf(" %c", &parada);
                return 1;
            }else{
                printf("\n Nome: %s", elementoTeste->nome);
                printf("\n Idade: %d", elementoTeste->idade);
                printf("\n CPF: %s", elementoTeste->cpf);
                printf("\n Matricula: %d", elementoTeste->matricula);
    }

    printf("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar: \n");
    scanf(" %c", &parada);
    fflush(stdin);
    return 1;
}
