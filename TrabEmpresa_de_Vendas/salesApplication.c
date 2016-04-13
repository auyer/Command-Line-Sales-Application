//
//  salesApplication.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//
// De acordo com o ISO 9171 : Que diz que um dos integrantes fará muito mais que os outros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "salesApplication.h"
#include "InputOutput.h"


void controll( ){
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
    printf("\n Autores:\n  >> Rafael Passos \n  >> Felipe Ministerio\n  >> Pedro Hartmann");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    fflush(stdin);
    inputChar("\n\n Digite qualquer tecla para continuar\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //Saida do programa
}

int menu(){
    int escolha;
    printf("\n-------------------------------------------------------");
    printf("\n-------------------- Menu Principal -------------------");
    printf("\n-------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n 1 - Cadastrar Novo Funcionario");
    printf("\n\n 2 - Consultar Funcionarios");
    printf("\n\n 3 - Cadastrar Produtos");
    printf("\n\n 4 - Alterar Dados de Produtos");
    printf("\n\n 5 - Consultar produtos por código");
    printf("\n\n 6 - Consultar produtos por Descriçao");
    printf("\n\n 7 - controll de vendas");
    printf("\n\n 8 - Listar Produtos Abaixo do Estoque");
    printf("\n\n 9 - Sair");
    printf("\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n-------------------Digite Sua Opcao--------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    
    
    escolha=inputInt("\n\nDigite Sua Opçao: ");
    switch(escolha){
        case 1:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return enrollEmployee();
            //cadastro de funcionario
            break;
        case 2:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return emplSearch();
            //consulta de funcionario
            break;
        case 3:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return addProduct();
            //cadastra os materiais
            break;
        case 4:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return editProduct();
            //alteracao de materiais
            break;
        case 5:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return productSearch_id();
            //consulta de materiais por _idigo
            break;
        case 6:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return productSearch_name();
            //consulta de materiais por descricao
            break;
        case 7:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return saleSystem();
            //controll de vendas (Nota fiscal e consietencia de estoque)
            break;
        case 8:
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            return lowAmount();
            //lista de produtos abaixo do estoque
            break;
        default:
            if ( escolha != 9){
                fflush(stdin);
                inputChar("\nOpcao incorreta, escolha novamente\n\n Digite qualquer tecla para continuar\n");
                fflush(stdin);
                return 1;
            }else{
                return 9;
            } // Saida do menu. 1 para erro, onde ele será reaberto, 9 para finalizaçao do programa por escolha do usuario
    }
    return 1;
}

int enrollEmployee(){
    int n=0;
    listEmpl elementoTeste, novoElemento;
    printf("\n------------------------------------------------------\n");
    printf("---------------Cadastro de Funcionarios---------------\n");
    printf("------------------------------------------------------\n\n");
    
    FILE *arquivoDf;
    if((arquivoDf = fopen("df.bin", "a+b")) == NULL){
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa ");
        fflush(stdin);
        return 0;
    } //teste de erro na abertura do arquivo
    fseek(arquivoDf, 0*sizeof(listEmpl), SEEK_SET);
    
    do{
        n++;
        fread(&elementoTeste,sizeof(listEmpl),1, arquivoDf);
    }while(!feof(arquivoDf));
    // A variavel int n sairá com o price da reg, que é igual a N (numero de funcionarios cadastrados anteriormente) + 1
    
    fflush(arquivoDf);
    
    
    
    strcpy(novoElemento.name,inputString("\n\nDigite o name do Funcionario: "));
    novoElemento.age= inputInt("\n\nDigite a age do Funcioario: ");
    strcpy(novoElemento._id,inputReg("\n\nDigite o _id do funcionario: "));
    printf("\n\nreg do funcionario: %d", n);
    novoElemento.reg=n;
    
    
    
    fwrite(&novoElemento,sizeof(listEmpl),1, arquivoDf); // Grava o struct do novo funcionario no Arquivo
    fflush(arquivoDf);
    
    
    fclose(arquivoDf);
    fflush(stdin);
    inputChar("\n\nCadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    
    
    return 1;
}

int emplSearch(){
    char aux;
    listEmpl elementoTeste;
    printf("\n-------------------------------------------------------\n");
    printf("----------------Consulta de Funcionarios---------------\n");
    printf("-------------------------------------------------------\n\n");
    FILE *arquivoDf;
    if((arquivoDf = fopen("df.bin", "a+b")) == NULL){
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    int price= inputInt("\nDigite a reg do funcionario que deseja buscar: ");
    
    fseek(arquivoDf, 0*sizeof(listEmpl), SEEK_SET);
    do{
        aux=fread(&elementoTeste,sizeof(listEmpl),1, arquivoDf);
        if(elementoTeste.reg==price)
            break;
    }while(!feof(arquivoDf));
    // busca a reg desejada. Se encontrada, cairá no break, se nao, sairá pelo while com aux== EOF
    
    if(!(aux)){
        fflush(stdin);
        inputChar("\nreg inexistente\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n\n name: %s", elementoTeste.name);
        printf("\n\n age: %d", elementoTeste.age);
        printf("\n\n _id: %s", elementoTeste._id);
        printf("\n\n reg: %d", elementoTeste.reg);
    }
    
    fflush(stdin);
    inputChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int addProduct(){
    
    listProducts listateste,listanovo;
    int n=0;
    
    FILE *arquivomat;
    printf("\n-------------------------------------------------------\n");
    printf("------------------Cadastro de Produtos-----------------\n");
    printf("-------------------------------------------------------\n\n");
    arquivomat = fopen("dm.bin","a+b");
    if(arquivomat == NULL)
    {
        inputChar("\nArquivo nao pode ser aberto.\n\nDigite Qualquer tecla para Finalizar");
        return 0;
    }
    else
    {
        fseek(arquivomat,0*sizeof(listProducts),SEEK_SET);
        
        do
        {
            n++;
            fread(&listateste,sizeof(listProducts),1,arquivomat);
            
        }
        while(!feof(arquivomat));
        
        fflush(arquivomat);
        
        strcpy(listanovo.name,inputString("\n\nDigite o name do produto: "));
        listanovo.amount = inputInt("\n\nDigite a amount do produto: ");
        listanovo.price = inputFloat("\n\nDigite o price do produto:");
        listanovo._id =n;
        listanovo.minAmount = inputInt("\n\nDigite a amount minima de estoque: ");
        printf("\n\n_idigo do produto: %d",n);
        
        fwrite(&listanovo,sizeof(listProducts),1,arquivomat);
        
        fflush(arquivomat);
        fclose(arquivomat);
        inputChar("\n\nCadastro bem sucedido\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
        
    }
    
}


int editProduct(){
    
    listProducts posicao;
    char aux,option;
    FILE *arquivoMat;
    int _idigo,alt;
    printf("\n------------------------------------------------------\n");
    printf("---------------Alterar Dados De Produto---------------\n");
    printf("------------------------------------------------------\n\n");
    arquivoMat = fopen("dm.bin","r+b");
    
    if(arquivoMat == NULL){
        inputChar("\nOcorreu um erro grave! Use alguma tecla para finalizar:");
        fflush(stdin);
        return 0;
    }else{
        fseek(arquivoMat,0*sizeof(listProducts),SEEK_SET);
        _idigo = inputInt("\n\nDigite o _idigo do Material para alterar: ");
        do{
            aux = fread(&posicao,sizeof(listProducts),1,arquivoMat);
            if(posicao._id == _idigo){
                fseek(arquivoMat,-1*sizeof(listProducts),SEEK_CUR);
                break;
            }
        }while(!feof(arquivoMat));
        if(!(aux)){
            inputChar("\n\n_idigo inexistente\nDigite qualquer tecla para continuar\n");
            fflush(stdin);
            return 1;
        }else{
            printf("\nname: %s", posicao.name);
            printf("\namount: %d", posicao.amount);
            printf("\nprice: %.2f", posicao.price);
            printf("\namount Minima: %d", posicao.minAmount);
            do{
                alt = inputInt("\n\n\nEscolha o que deseja alterar: \n\n1-name\n2-amount\n3-price\n4-amount Minima\n\n\nOpçao: ");
                switch(alt){
                        
                    case 1:
                        strcpy(posicao.name,inputString("\n\nDigite o novo name do produto: "));
                        break;
                    case 2:
                        posicao.amount = inputInt("\n\nDigite a nova amount do produto: ");
                        break;
                    case 3:
                        posicao.price = inputFloat("\n\nDigite o price do produto:\n");
                        break;
                    case 4:
                        posicao.minAmount = inputInt("\n\nDigite a amount minima de estoque:  ");
                        break;
                    default:
                        inputChar("\n\n\n\nOpcao incorreta.\n Encolha entre as opçoes 1 e 4\n\nDigite Qualquer tecla para continuar");
                }
                option = inputChar ("\n\nDeseja alterar outro dado?( 's' ou 'n' ) \n");
            }while(option == 's');
            
            fwrite(&posicao,sizeof(listProducts),1,arquivoMat);
            
        }
        fflush(arquivoMat);
        fclose(arquivoMat);
        inputChar("\nAleraçao bem sucedida\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }
}

int productSearch_id(){
    char aux;
    listProducts listateste;
    FILE *arquivoMat;
    printf("\n------------------------------------------------------\n");
    printf("-----------------Consulta de Produtos-----------------\n");
    printf("------------------------------------------------------\n\n");
    
    arquivoMat = fopen("dm.bin","a+b");
    
    if(arquivoMat == NULL)
    {
        inputChar("\n\nArquivo nao pode ser aberto.\n\nOcorreu um erro grave! Use alguma tecla para finalizar: ");
        return 0;
    }else{
        
        fseek(arquivoMat,0*sizeof(listProducts),SEEK_SET);
        int price = inputInt("\nDigite o _idigo do Material que deseja buscar: ");
        do{
            
            aux = fread(&listateste,sizeof(listProducts),1,arquivoMat);
            if(listateste._id == price)
                break;
        }while(!feof(arquivoMat));
        
        if(!(aux)){
            fflush(stdin);
            inputChar("\n_idigo inexistente\nDigite qualquer tecla para continuar\n");
            fflush(stdin);
            return 1;
        }else{
            printf("\n\nname: %s", listateste.name);
            printf("\n\namount: %d", listateste.amount);
            printf("\n\nprice: %.2f", listateste.price);
            printf("\n\namount Minima: %d", listateste.minAmount);
        }
        
        fflush(stdin);
        inputChar("\n\n\nConsulta bem sucedida\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }
}



int productSearch_name(){
    char aux;
    int n=0;
    listProducts elementoTeste;
    printf("\n------------------------------------------------------\n");
    printf("----------------Consulta de Produtos----------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *arquivoDm;
    if((arquivoDm = fopen("dm.bin", "a+b")) == NULL){
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }
    
    char *price= inputString("\nDigite a descricao que deseja pesquisar: ");
    
    fseek(arquivoDm, 0*sizeof(listProducts), SEEK_SET);
    do{
        n++;
        aux=fread(&elementoTeste,sizeof(listProducts),1, arquivoDm);
        if(0==strcmp(elementoTeste.name,price))
            break;
    }while(!feof(arquivoDm));
    if(!(aux)){
        fflush(stdin);
        inputChar("\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n\n_idigo do produto: %d", elementoTeste._id);
        printf("\n\nname do Produto: %s", elementoTeste.name);
        printf("\n\namount em Estoque: %d", elementoTeste.amount);
        printf("\n\nPreco por Unage: %.2f", elementoTeste.price);
        printf("\n\nEstoque Minimo: %d", elementoTeste.minAmount);
    }
    
    fflush(stdin);
    inputChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int saleSystem()
{
    
    char aux;
    int n=0, price=0;
    listEmpl auxFunc;
    FILE *arquivoDf;
    if((arquivoDf = fopen("df.bin", "a+b")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    fseek(arquivoDf, 0*sizeof(listEmpl), SEEK_SET);
    printf("\n------------------------------------------------------\n");
    printf("----------------Geraçao de Nota Fiscal----------------\n");
    printf("------------------------------------------------------\n\n\n");
    price= inputInt("\nDigite a reg do vendedor:  ");
    do
    {
        n++;
        aux=fread(&auxFunc,sizeof(listEmpl),1, arquivoDf);
        if(auxFunc.reg==price)
            break;
    }
    while(!feof(arquivoDf));
    if(!(aux))
    {
        fflush(stdin);
        inputChar("\nreg inexistente\nDigite qualquer tecla para continuar: ");
        fflush(stdin);
        return 1;
    }
    // Procura pelo funcionario usando a função de pesquisa funcionario adaptada e a armazena para uso futuro.
    fclose(arquivoDf);
    char prov;
    int quebra, i, j=0, quant[100];
    listProducts auxMat[100];
    
    printf("\n\n------------------------------------------------------\n");
    printf("---------------- Produtos Vendidos:------------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *arquivoDm;
    if((arquivoDm = fopen("dm.bin", "r+b")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;//teste de abertura de arquivo
    }
    
    
    for (i=0; i<100; i++) // laço para a criação da lista de materiais vendidos.
    {
        fseek(arquivoDm, 0*sizeof(listProducts), SEEK_SET);
        int _idigo= inputInt("\n\nDigite o _idigo do produto: ");
        do
        {
            
            j++;
            prov=fread(&auxMat[i],sizeof(listProducts),1, arquivoDm);
            if(auxMat[i]._id==_idigo)
                break;
        }
        while(!feof(arquivoDm));
        if(!(prov))
        {
            fflush(stdin);
            inputChar("\n\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n\n");
            fflush(stdin);// mensagem de erro que não finaliza o laço.
        }
        else
        {
            quant[i] = inputInt ("\n\nEntre com a amount do produto vendido:");
            if (quant[i]>auxMat[i].amount)
            {
                printf("\n\nNao ha a amount pedida em estoque.\n\namount em estoque: %d", auxMat[i].amount);
                
                i--;
            }else{
                fseek(arquivoDf, -1*sizeof(listProducts), SEEK_CUR);
                auxMat[i].amount -=quant[i];
                fwrite(&auxMat[i], sizeof(listProducts), 1, arquivoDm);
            }
        }
        quebra = inputInt("\n\n\nDeseja adicionar mais um material? Digite 1 para sim ou 0 para não: \n");
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
    printf("\n| Vendedor: %s - reg : %d\n|\n|", auxFunc.name, auxFunc.reg);
    for(i=0; i<100; i++){
        if (quant[i] != 0){
            total[i] = auxMat[i].price * quant[i];
            printf(" %d- %s  - _id %d \n|", i+1, auxMat[i].name, auxMat[i]._id);
            printf("  -     %d UN X R$%.2f                 T  R$%.2f\n|\n|" ,quant[i], auxMat[i].price, total[i]);
            totalCompra +=total[i]; //adição do price total da compra
        }else{
            break; //quebra o laço de impressão caso quant[i] seja igual a zero.
        }
    }
    printf("\n|\n|Total da Compra:                           R$%.2f\n|", totalCompra);
    printf("\n|-------------------------------------------------------\n");
    fclose(arquivoDm);
    fflush(stdin);
    inputChar("\n\n\nAgradecemos pela compra em nossa loja!\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int lowAmount()
{
    listProducts matAtual;
    printf("\n------------------------------------------------------\n");
    printf("----------------Verificação de Estoque----------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *arquivoDm;
    if((arquivoDm = fopen("dm.bin", "rb")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }//Testa a abertura do arquivo.
    
    printf("\n|-------------------------------------------------------\n|");
    fseek(arquivoDm, 0*sizeof(listProducts), SEEK_SET); //vai para o inicio do arquivo
    do
    {
        matAtual.minAmount=1;
        matAtual.amount=2;
        fread(&matAtual,sizeof(listProducts),1, arquivoDm);
        if (matAtual.amount < matAtual.minAmount)
            printf("\n|%s - abaixo do estoque minimo.\n|  |amount atual: %d - amount minima: %d\n|", matAtual.name, matAtual.amount, matAtual.minAmount);
        else if (matAtual.amount == matAtual.minAmount)
            printf("\n|%s - Estoque no minimo.\n|  |amount atual: %d - amount minima: %d\n|", matAtual.name, matAtual.amount, matAtual.minAmount);
            
    }
    while(!feof(arquivoDm));
    printf("\n|-------------------------------------------------------\n");
    //Verifica os materias cadastrados e se eles estão abaixo do estoque minimo, imprimindo as equivalencias
    fclose(arquivoDm);
    fflush(stdin);
    inputChar("\n\n\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}// prompt de final de programa.




