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
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return cadastroFuncionario();
            //cadastro de funcionario
            break;
        case 2:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return consultaFuncionario();
            //consulta de funcionario
            break;
        case 3:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return cadastroMateriais();
            //cadastra os materiais
            break;
        case 4:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            //return alteracaoMaterial();
            //alteracao de materiais
            break;
        case 5:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return consultaMaterialCod();
            //consulta de materiais por codigo
            break;
        case 6:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return consultaMaterialDesc();
            //consulta de materiais por descricao
            break;
        case 7:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return controleVendas();
            //controle de vendas (Nota fiscal e consietencia de estoque)
            break;
        case 8:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return estoqueAbaixoMinimo();
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
    printf("\n------------------------------------------------------\n");
    printf("---------------Cadastro de Funcionarios---------------\n");
    printf("------------------------------------------------------\n\n");
    
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
    printf("\n-------------------------------------------------------\n");
    printf("---------------Consulta de Funcionarios---------------\n");
    printf("-------------------------------------------------------\n\n");
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

int cadastroMateriais(){
    
    listaMateriais listateste,listanovo;
    int n=0;
    
    FILE *arquivomat;
    printf("\n-------------------------------------------------------\n");
    printf("-----------------Cadastro de Materiais-----------------\n");
    printf("-------------------------------------------------------\n\n");
    arquivomat = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin","a+b");
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
        
        strcpy(listanovo.nome,entradaString("Digite o nome do material: "));
        listanovo.quantidade = entradaInt("Digite a quantidade do material: ");
        listanovo.valor = entradaFloat("Digite o valor do material:");
        listanovo.cod =n;
        listanovo.qntMinima = entradaInt("Digite a quantidade minima de estoque: ");
        printf("O codigo do produto: %d",n);
        
        
        fwrite(&listanovo,sizeof(listaMateriais),1,arquivomat);
        
        fflush(arquivomat);
        fclose(arquivomat);
        entradaChar("\n Cadastro bem sucedido\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
        
    }
    
}



/*
 
 
 
 Inserir Alterar Material
 
 
 
 
 */

int consultaMaterialCod(){
    char aux;
    listaMateriais listateste;
    FILE *arquivoMat;
    printf("\n------------------------------------------------------\n");
    printf("----------------Consulta de Materiais----------------\n");
    printf("------------------------------------------------------\n\n");
    
    arquivoMat = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin","a+b");
    
    if(arquivoMat == NULL)
    {
        entradaChar("\n\nArquivo nao pode ser aberto.\n\nOcorreu um erro grave! Use alguma tecla para finalizar: ");
        return 0;
    }else{
        
        fseek(arquivoMat,0*sizeof(listaMateriais),SEEK_SET);
        int valor = entradaInt("\nDigite o codigo do Material que deseja buscar: ");
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
            printf("\n\nNome: %s", listateste.nome);
            printf("\n\nQuantidade: %d", listateste.quantidade);
            printf("\n\nValor: %.2f", listateste.valor);
            printf("\n\nQuantidade Minima: %d", listateste.qntMinima);
        }
        
        fflush(stdin);
        entradaChar("\n\n\nConsulta bem sucedida\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }
}



int consultaMaterialDesc(){
    char aux;
    int n=0;
    listaMateriais elementoTeste;
    printf("\n------------------------------------------------------\n");
    printf("----------------Consulta de Materiais----------------\n");
    printf("------------------------------------------------------\n\n");
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
        if(0==strcmp(elementoTeste.nome,valor))
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
        printf("\n Preco por Unidade: %.2f", elementoTeste.valor);
        printf("\n Estoque Minimo: %d", elementoTeste.qntMinima);
    }
    
    fflush(stdin);
    entradaChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int controleVendas()
{
    
    char aux;
    int n=0, valor=0;
    listaFuncionarios auxFunc;
    FILE *arquivoDf;
    if((arquivoDf = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/df.bin", "a+b")) == NULL)
    {
        fflush(stdin);
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    fseek(arquivoDf, 0*sizeof(listaFuncionarios), SEEK_SET);
    printf("\n-------------Geraçao de nota fiscal---------------\n\n");
    valor= entradaInt("\nDigite a matricula do vendedor:  ");
    do
    {
        n++;
        aux=fread(&auxFunc,sizeof(listaFuncionarios),1, arquivoDf);
        if(auxFunc.matricula==valor)
            break;
    }
    while(!feof(arquivoDf));
    if(!(aux))
    {
        fflush(stdin);
        entradaChar("\nMatricula inexistente\nDigite qualquer tecla para continuar: ");
        fflush(stdin);
        return 1;
    }
    // Procura pelo funcionario usando a função de pesquisa funcionario adaptada e a armazena para uso futuro.
    fclose(arquivoDf);
    char prov;
    int quebra, i, j=0, quant[100];
    listaMateriais auxMat[100];
    
    printf("\n\n------------------------------------------------------\n");
    printf("----------------Materiais Vendidos:------------------\n");
    printf("------------------------------------------------------\n\n");
    int contArquivo=0;
    FILE *arquivoDm;
    if((arquivoDm = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin", "r+b")) == NULL)
    {
        fflush(stdin);
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;//teste de abertura de arquivo
    }
    
    
    for (i=0; i<100; i++) // laço para a criação da lista de materiais vendidos.
    {
        fseek(arquivoDm, 0*sizeof(listaMateriais), SEEK_SET);
        int codigo= entradaInt("\n\nDigite o codigo do produto: ");
        do
        {
            
            j++;
            prov=fread(&auxMat[i],sizeof(listaMateriais),1, arquivoDm);
            if(auxMat[i].cod==codigo)
                break;
        }
        while(!feof(arquivoDm));
        if(!(prov))
        {
            fflush(stdin);
            entradaChar("\n\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n\n");
            fflush(stdin);// mensagem de erro que não finaliza o laço.
        }
        else
        {
            quant[i] = entradaInt ("\n\nEntre com a quantidade do produto vendido:");
            if (quant[i]>auxMat[i].quantidade)
            {
                printf("\n\nNao ha a quantidade pedida em estoque.\n\nQuantidade em estoque: %d", auxMat[i].quantidade);
                
                i--;
            }else{
                fseek(arquivoDf, -1*sizeof(listaMateriais), SEEK_CUR);
                contArquivo++;
                auxMat[i].quantidade -=quant[i];
                fwrite(&auxMat[i], sizeof(listaMateriais), 1, arquivoDm);
            }
        }
        quebra = entradaInt("\n\n\nDeseja adicionar mais um material? Digite 1 para sim ou 0 para não: \n");
        if (quebra == 0)
        {
            quant[i+1] = 0;// Quebra este laço e serve para quebrar um laço mais a frente na impressão da nota fiscal.
            break;
        }
    }
    
    float total[100], totalCompra;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n|-------------------------------------------------------\n");
    printf("|---------------------Nota Fiscal-----------------------\n|");
    printf("\n| Vendedor: %s - Matricula : %d\n|\n|", auxFunc.nome, auxFunc.matricula);
    for(i=0; i<100; i++){
        if (quant[i] != 0){
            total[i] = auxMat[i].valor * quant[i];
            printf(" %d- %s  - cod %d \n|", i+1, auxMat[i].nome, auxMat[i].cod);
            printf("  -     %d UN X R$%.2f                    T  R$%.2f\n|\n|" ,quant[i], auxMat[i].valor, total[i]);
            totalCompra +=total[i]; //adição do valor total da compra
        }else{
            break; //quebra o laço de impressão caso quant[i] seja igual a zero.
        }
    }
    printf("\n|\n|Total da Compra:                              R$%.2f\n|", totalCompra);
    printf("\n|-------------------------------------------------------\n");
    fclose(arquivoDm);
    fflush(stdin);
    entradaChar("\n\n\n Agradecemos pela compra em nossa loja!\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int estoqueAbaixoMinimo()
{
    listaMateriais matAtual;
    printf("\n------------------------------------------------------\n");
    printf("----------------Verificação de Estoque-----------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *arquivoDm;
    if((arquivoDm = fopen("/Users/Auyer/Documents/Facul/C/PC1_fontes/TrabEmpresa_de_Vendas/TrabEmpresa_de_Vendas/dm.bin", "rb")) == NULL)
    {
        fflush(stdin);
        entradaChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }//Testa a abertura do arquivo.
    
    
    fseek(arquivoDm, 0*sizeof(listaMateriais), SEEK_SET); //vai para o inicio do arquivo
    do
    {
        matAtual.qntMinima=1;
        matAtual.quantidade=2;
        fread(&matAtual,sizeof(listaMateriais),1, arquivoDm);
        if (matAtual.quantidade < matAtual.qntMinima)
            printf("\n|\n|%s abaixo do estoque minimo.\n|  |Quantidade atual: %d - Quantidade minima: %d", matAtual.nome, matAtual.quantidade, matAtual.qntMinima);
    }
    while(!feof(arquivoDm));
    //Verifica os materias cadastrados e se eles estão abaixo do estoque minimo, imprimindo as equivalencias
    fclose(arquivoDm);
    fflush(stdin);
    entradaChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}// prompt de final de programa.
