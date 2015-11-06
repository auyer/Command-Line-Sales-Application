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
    fflush(stdin);
    entradaChar("\n\n Digite qualquer tecla para continuar\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //Saida do programa
}

int menu(){
    int escolha;
    printf("\n-------------------------------------------------------");
    printf("\n-------------------- Store Manager --------------------");
    printf("\n-------------------------------------------------------");
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
    printf("\n\n\n-----------------Digite Sua Opcao------------------");
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
            return cadastroMateriais();
            //cadastra os materiais
            break;
        case 4:
            return alteracaoMaterial();
            //alteracao de materiais
            break;
        case 5:
            //return consultaMaterialCod();
            //consulta de materiais por codigo
            break;
        case 6:
            return consultaMaterialDesc();
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
                fflush(stdin);
                entradaChar("\nOpcao incorreta, escolha novamente\n\n Digite qualquer tecla para continuar\n");
                fflush(stdin);
                return 1;
            }else{
                return 9;
            } // Saida do menu. 1 para erro, onde ele será reaberto, 9 para finalizaçao do programa por escolha do usuario
    }
    return 1;
}

int cadastroFuncionario(){
    int n=0;
    listaFuncionarios elementoTeste, novoElemento;
    printf("\n\n\n-------------Cadastro de Funcionarios-------------");
    
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "a+b")) == NULL){
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa ");
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
    fflush(stdin);
    entradaChar("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    
    
    return 1;
}

int consultaFuncionario(){
    char aux;
    listaFuncionarios elementoTeste;
    printf("\n\n\n-----------Consulta de Funcionarios-----------");
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "a+b")) == NULL){
        fflush(stdin);
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    int valor= entradaInt("\nDigite a matricula do funcionario que deseja buscar: ");
    
    fseek(arquivoDf, 0*sizeof(listaFuncionarios), SEEK_SET);
    do{
        aux=fread(&elementoTeste,sizeof(listaFuncionarios),1, arquivoDf);
        if(elementoTeste.matricula==valor)
            break;
    }while(!feof(arquivoDf));
    // busca a matricula desejada. Se encontrada, cairá no break, se nao, sairá pelo while com aux== EOF
    
    if(!(aux)){
        fflush(stdin);
        entradaChar("\nMatricula inexistente\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n Nome: %s", elementoTeste.nome);
        printf("\n Idade: %d", elementoTeste.idade);
        printf("\n CPF: %s", elementoTeste.cpf);
        printf("\n Matricula: %d", elementoTeste.matricula);
    }
    
    fflush(stdin);
    entradaChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int consultaMaterialDesc(){
    char aux;
    int n=0;
    listaMateriais elementoTeste;
    printf("\n\n\n-----------Consulta de Materiais-----------");
    FILE *arquivoDm;
    if((arquivoDm = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin", "a+b")) == NULL){
        fflush(stdin);
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }
    
    char *valor= entradaString("\nDigite a descricao que deseja pesquisar: ");
    
    fseek(arquivoDm, 0*sizeof(listaMateriais), SEEK_SET);
    do{
        n++;
        aux=fread(&elementoTeste,sizeof(listaMateriais),1, arquivoDm);
        if(strcmp(elementoTeste.nome,valor))
            break;
    }while(!feof(arquivoDm));
    if(!(aux)){
        fflush(stdin);
        entradaChar("\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n Codigo do produto: %d", elementoTeste.cod);
        printf("\n Nome do Produto: %s", elementoTeste.nome);
        printf("\n Quantidade em Estoque: %d", elementoTeste.quantidade);
        printf("\n Preco por Unidade: %f", elementoTeste.valor);
        printf("\n Estoque Minimo: %d", elementoTeste.qntMinima);
    }
    
    fflush(stdin);
    entradaChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int cadastroMateriais(){

    listaMateriais listateste,listanovo;
    int n=0;
    char parada;

    FILE *arquivomat;
    printf("\n\n\n-------------Cadastro de Materiais-------------\n\n");
    arquivomat = fopen("listamat.bin","a+b");
    if(arquivomat == NULL)
    {
        printf("Arquivo nao pode ser aberto.\n");
        printf("Ocorreu um erro grave! Use alguma tecla para finalizar:");
        getc(stdin);
return 0;
    }
    else
    {

        fseek(arquivomat,0*sizeof(listaMateriais),SEEK_SET);

        do
        {

            n++;
            fread(&listateste,sizeof(listaMateriais),1,arquivomat);

        }
        while(!feof(arquivomat));

        fflush(arquivomat);

        strcpy(listanovo.nome,entradaString("Digite o nome do material:\n"));
        listanovo.quantidade = entradaInt("Digite a quantidade do material:\n");
        listanovo.valor = entradaFloat("Digite o valor do material:\n");
        listanovo.cod = printf("O codigo do produto: %d\n",n);
        listanovo.qntMinima = entradaInt("Digite a quantidade minima de estoque: \n");


        fwrite(&listanovo,sizeof(listaMateriais),1,arquivomat);

        fflush(arquivomat);
        fclose(arquivomat);
        printf("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
        scanf("%c", &parada);
        fflush(stdin);
        return 1;

    }

}

int alteracaoMaterial(){
char aux;
listaMateriais listateste;
FILE *arquivoMat;

printf("\n\n\n-------------Alterar dados de material-------------\n\n");

arquivoMat = fopen("listamat.bin","a+b");

    if(arquivoMat == NULL)
    {
        printf("Arquivo nao pode ser aberto.\n");
        printf("Ocorreu um erro grave! Use alguma tecla para finalizar:");
        getc(stdin);
        return 0;
    }else{

    fseek(arquivoMat,0*sizeof(listaMateriais),SEEK_SET);
    int valor = entradaInt("Digite o codigo do Material que deseja buscar: ");
    do{

    aux = fread(&listateste,sizeof(listaMateriais),1,arquivoMat);
        if(listateste.cod == valor)
            break;
    }while(!feof(arquivoMat));

     if(!(aux)){
                fflush(stdin);
                entradaChar("\nCodigo inexistente\nDigite qualquer tecla para continuar\n");
                fflush(stdin);
                return 1;
            }else{
                printf("\n Nome: %s", listateste.nome);
                printf("\n Quantidade: %d", listateste.quantidade);
                printf("\n Valor: %s", listateste.valor);
                printf("\n Quantidade Minima: %d", listateste.qntMinima);
        }

    fflush(stdin);
    entradaChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}
    }

