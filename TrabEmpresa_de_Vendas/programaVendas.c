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
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //alternativa portavel ao system("cls");
    int x;
    do{
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        //system("cls");
        x= menu();
    }while (x==1);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //alternativa portavel ao system("cls");
    
    printf("\n------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n- - - - -Obrigado por usar nosso programa! - - -  - - ");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n Autores:\n  >> Rafael 'Auyer' Passos \n  >> Felipe 'Kurishiro' Ministerio\n  >> Pedro 'Kyrie' Hartmann");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n Digite qualquer tecla para continuar: ");
    fflush(stdin);
    scanf(" %c", &parada);
    fflush(stdin); // Saida do programa
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
                printf("\n\n Digite qualquer tecla para continuar: ");
                scanf(" %c", &parada);
                fflush(stdin);
                return 1;
            }else{
                return 9;
            } // Saida do menu. 1 para erro, onde ele será reaberto, 9 para finalizaçao do programa por escolha do usuario
    }
    return 1;
}

int cadastroFuncionario(){
    char parada;
    int n=0;
    listaFuncionarios elementoTeste, novoElemento;
    printf("\n\n\n-------------Cadastro de Funcionarios-------------");
    
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "a+b")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        fflush(stdin);
        return 0;
    } //teste de erro na abertura do arquivo
    fseek(arquivoDf, 0*sizeof(listaFuncionarios), SEEK_SET);
    do{
        n++;
        fread(&elementoTeste,sizeof(listaFuncionarios),1, arquivoDf);
    }while(!feof(arquivoDf));
    // A variavel int n sairá com o valor da matricula, que é igual a N (numero de funcionarios cadastrados anteriormente) + 1
   

    
    
    fflush(arquivoDf);
    
    
   
    strcpy(novoElemento.nome,entradaString("\nDigite o nome do Funcionario: "));
    novoElemento.idade= entradaInt("\nDigite a idade do Funcioario: ");
    strcpy(novoElemento.cpf,entradaCPF("\nDigite o CPF do funcionario: "));
    novoElemento.matricula=n;
    
    
    
    fwrite(&novoElemento,sizeof(listaFuncionarios),1, arquivoDf); // Grava o struct do novo funcionario no Arquivo
    fflush(arquivoDf);
    
    
    fclose(arquivoDf);
    printf("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    scanf(" %c", &parada);
    fflush(stdin);
    
    
    
    return 1;
}

int consultaFuncionario(){
    char parada, aux;
    int n=0;
    listaFuncionarios elementoTeste;
    printf("\n\n\n-----------Consulta de Funcionarios-----------");
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "a+b")) == NULL){
        printf("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa");
        scanf("%c", &parada);
        fflush(stdin);
        return 0; // Testa a abertura do arquivo
    }
    
    int valor= entradaInt("\nDigite a matricula do funcionario que deseja buscar: ");
    
    fseek(arquivoDf, 0*sizeof(listaFuncionarios), SEEK_SET);
    do{
        n++;
        aux=fread(&elementoTeste,sizeof(listaFuncionarios),1, arquivoDf);
        if(elementoTeste.matricula==valor)
            break;
    }while(!feof(arquivoDf));
    // busca a matricula desejada. Se encontrada, cairá no break, se nao, sairá pelo while com aux== EOF
    
            if(!(aux)){
                printf("\nMatricula inexistente");
                printf("\nDigite qualquer tecla para continuar\n");
                fflush(stdin);
                scanf(" %c", &parada);
                return 1;
            }else{
                printf("\n Nome: %s", elementoTeste.nome);
                printf("\n Idade: %d", elementoTeste.idade);
                printf("\n CPF: %s", elementoTeste.cpf);
                printf("\n Matricula: %d", elementoTeste.matricula);
        }
    
    

    printf("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar: \n");
    scanf(" %c", &parada);
    fflush(stdin);
    return 1;
}
