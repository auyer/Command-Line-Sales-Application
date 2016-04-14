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
    printf("\n--------------------- Main  Menu --------------------");
    printf("\n-------------------------------------------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n\n 1 - Enroll new employee");
    printf("\n\n 2 - Search for a Employee");
    printf("\n\n 3 - Register a Products");
    printf("\n\n 4 - Edit Product Data");
    printf("\n\n 5 - Search for a Product  ID");
    printf("\n\n 6 - Search for a Product  Name");
    printf("\n\n 7 - Sales Aplication");
    printf("\n\n 8 - List of PRoducts below Minimum Amount");
    printf("\n\n 9 - Exit");
    printf("\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
    printf("\n-------------------Chose your Option--------------------");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    
    
    escolha=inputInt("\n\nType your option: ");
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
    listEmpl testEntity, newEntity;
    printf("\n------------------------------------------------------\n");
    printf("---------------Cadastro de Funcionarios---------------\n");
    printf("------------------------------------------------------\n\n");
    
    FILE *employeesFIle;
    if((employeesFIle = fopen("df.bin", "a+b")) == NULL){
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa ");
        fflush(stdin);
        return 0;
    } //teste de erro na abertura do arquivo
    fseek(employeesFIle, 0*sizeof(listEmpl), SEEK_SET);
    
    do{
        n++;
        fread(&testEntity,sizeof(listEmpl),1, employeesFIle);
    }while(!feof(employeesFIle));
    // A variavel int n sairá com o price da reg, que é igual a N (numero de funcionarios cadastrados anteriormente) + 1
    
    fflush(employeesFIle);
    
    
    
    strcpy(newEntity.name,inputString("\n\nDigite o name do Funcionario: "));
    newEntity.age= inputInt("\n\nDigite a age do Funcioario: ");
    strcpy(newEntity._id,inputReg("\n\nDigite o _id do funcionario: "));
    printf("\n\nreg do funcionario: %d", n);
    newEntity.reg=n;
    
    
    
    fwrite(&newEntity,sizeof(listEmpl),1, employeesFIle); // Grava o struct do novo funcionario no Arquivo
    fflush(employeesFIle);
    
    
    fclose(employeesFIle);
    fflush(stdin);
    inputChar("\n\nCadastro bem sucedido\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    
    
    return 1;
}

int emplSearch(){
    char aux;
    listEmpl testEntity;
    printf("\n-------------------------------------------------------\n");
    printf("----------------Consulta de Funcionarios---------------\n");
    printf("-------------------------------------------------------\n\n");
    FILE *employeesFIle;
    if((employeesFIle = fopen("df.bin", "a+b")) == NULL){
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    int price= inputInt("\nDigite a reg do funcionario que deseja buscar: ");
    
    fseek(employeesFIle, 0*sizeof(listEmpl), SEEK_SET);
    do{
        aux=fread(&testEntity,sizeof(listEmpl),1, employeesFIle);
        if(testEntity.reg==price)
            break;
    }while(!feof(employeesFIle));
    // busca a reg desejada. Se encontrada, cairá no break, se nao, sairá pelo while com aux== EOF
    
    if(!(aux)){
        fflush(stdin);
        inputChar("\nreg inexistente\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n\n name: %s", testEntity.name);
        printf("\n\n age: %d", testEntity.age);
        printf("\n\n _id: %s", testEntity._id);
        printf("\n\n reg: %d", testEntity.reg);
    }
    
    fflush(stdin);
    inputChar("\n\n\n Consulta bem sucedida\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int addProduct(){
    
    listProducts listateste,listanovo;
    int n=0;
    
    FILE *productsFile;
    printf("\n-------------------------------------------------------\n");
    printf("------------------Cadastro de Produtos-----------------\n");
    printf("-------------------------------------------------------\n\n");
    productsFile = fopen("dm.bin","a+b");
    if(productsFile == NULL)
    {
        inputChar("\nArquivo nao pode ser aberto.\n\nDigite Qualquer tecla para Finalizar");
        return 0;
    }
    else
    {
        fseek(productsFile,0*sizeof(listProducts),SEEK_SET);
        
        do
        {
            n++;
            fread(&listateste,sizeof(listProducts),1,productsFile);
            
        }
        while(!feof(productsFile));
        
        fflush(productsFile);
        
        strcpy(listanovo.name,inputString("\n\nDigite o name do produto: "));
        listanovo.amount = inputInt("\n\nDigite a amount do produto: ");
        listanovo.price = inputFloat("\n\nDigite o price do produto:");
        listanovo._id =n;
        listanovo.minAmount = inputInt("\n\nDigite a amount minima de estoque: ");
        printf("\n\n_idigo do produto: %d",n);
        
        fwrite(&listanovo,sizeof(listProducts),1,productsFile);
        
        fflush(productsFile);
        fclose(productsFile);
        inputChar("\n\nCadastro bem sucedido\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
        
    }
    
}


int editProduct(){
    
    listProducts posicao;
    char aux,option;
    FILE *productsFile;
    int _idigo,alt;
    printf("\n------------------------------------------------------\n");
    printf("---------------Alterar Dados De Produto---------------\n");
    printf("------------------------------------------------------\n\n");
    productsFile = fopen("dm.bin","r+b");
    
    if(productsFile == NULL){
        inputChar("\nOcorreu um erro grave! Use alguma tecla para finalizar:");
        fflush(stdin);
        return 0;
    }else{
        fseek(productsFile,0*sizeof(listProducts),SEEK_SET);
        _idigo = inputInt("\n\nDigite o _idigo do Material para alterar: ");
        do{
            aux = fread(&posicao,sizeof(listProducts),1,productsFile);
            if(posicao._id == _idigo){
                fseek(productsFile,-1*sizeof(listProducts),SEEK_CUR);
                break;
            }
        }while(!feof(productsFile));
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
            
            fwrite(&posicao,sizeof(listProducts),1,productsFile);
            
        }
        fflush(productsFile);
        fclose(productsFile);
        inputChar("\nAleraçao bem sucedida\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }
}

int productSearch_id(){
    char aux;
    listProducts listateste;
    FILE *productsFile;
    printf("\n------------------------------------------------------\n");
    printf("-----------------Consulta de Produtos-----------------\n");
    printf("------------------------------------------------------\n\n");
    
    productsFile = fopen("dm.bin","a+b");
    
    if(productsFile == NULL)
    {
        inputChar("\n\nArquivo nao pode ser aberto.\n\nOcorreu um erro grave! Use alguma tecla para finalizar: ");
        return 0;
    }else{
        
        fseek(productsFile,0*sizeof(listProducts),SEEK_SET);
        int price = inputInt("\nDigite o _idigo do Material que deseja buscar: ");
        do{
            
            aux = fread(&listateste,sizeof(listProducts),1,productsFile);
            if(listateste._id == price)
                break;
        }while(!feof(productsFile));
        
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
    listProducts testEntity;
    printf("\n------------------------------------------------------\n");
    printf("----------------Consulta de Produtos----------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *productsFile;
    if((productsFile = fopen("dm.bin", "a+b")) == NULL){
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }
    
    char *price= inputString("\nDigite a descricao que deseja pesquisar: ");
    
    fseek(productsFile, 0*sizeof(listProducts), SEEK_SET);
    do{
        n++;
        aux=fread(&testEntity,sizeof(listProducts),1, productsFile);
        if(0==strcmp(testEntity.name,price))
            break;
    }while(!feof(productsFile));
    if(!(aux)){
        fflush(stdin);
        inputChar("\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n");
        fflush(stdin);
        return 1;
    }else{
        printf("\n\n_idigo do produto: %d", testEntity._id);
        printf("\n\nname do Produto: %s", testEntity.name);
        printf("\n\namount em Estoque: %d", testEntity.amount);
        printf("\n\nPreco por Unage: %.2f", testEntity.price);
        printf("\n\nEstoque Minimo: %d", testEntity.minAmount);
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
    FILE *employeesFIle;
    if((employeesFIle = fopen("df.bin", "a+b")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0; // Testa a abertura do arquivo
    }
    
    fseek(employeesFIle, 0*sizeof(listEmpl), SEEK_SET);
    printf("\n------------------------------------------------------\n");
    printf("----------------Geraçao de Nota Fiscal----------------\n");
    printf("------------------------------------------------------\n\n\n");
    price= inputInt("\nDigite a reg do vendedor:  ");
    do
    {
        n++;
        aux=fread(&auxFunc,sizeof(listEmpl),1, employeesFIle);
        if(auxFunc.reg==price)
            break;
    }
    while(!feof(employeesFIle));
    if(!(aux))
    {
        fflush(stdin);
        inputChar("\nreg inexistente\nDigite qualquer tecla para continuar: ");
        fflush(stdin);
        return 1;
    }
    // Procura pelo funcionario usando a função de pesquisa funcionario adaptada e a armazena para uso futuro.
    fclose(employeesFIle);
    char prov;
    int _break, i, j=0, amnt[100];
    listProducts auxMat[100];
    
    printf("\n\n------------------------------------------------------\n");
    printf("---------------- Produtos Vendidos:------------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *productsFile;
    if((productsFile = fopen("dm.bin", "r+b")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;//teste de abertura de arquivo
    }
    
    
    for (i=0; i<100; i++) // laço para a criação da lista de materiais vendidos.
    {
        fseek(productsFile, 0*sizeof(listProducts), SEEK_SET);
        int _idigo= inputInt("\n\nDigite o _idigo do produto: ");
        do
        {
            
            j++;
            prov=fread(&auxMat[i],sizeof(listProducts),1, productsFile);
            if(auxMat[i]._id==_idigo)
                break;
        }
        while(!feof(productsFile));
        if(!(prov))
        {
            fflush(stdin);
            inputChar("\n\nNenhum material encontrado com essa descricao\nDigite qualquer tecla para continuar\n\n");
            fflush(stdin);// mensagem de erro que não finaliza o laço.
        }
        else
        {
            amnt[i] = inputInt ("\n\nEntre com a amount do produto vendido:");
            if (amnt[i]>auxMat[i].amount)
            {
                printf("\n\nNao ha a amount pedida em estoque.\n\namount em estoque: %d", auxMat[i].amount);
                
                i--;
            }else{
                fseek(employeesFIle, -1*sizeof(listProducts), SEEK_CUR);
                auxMat[i].amount -=amnt[i];
                fwrite(&auxMat[i], sizeof(listProducts), 1, productsFile);
            }
        }
        _break = inputInt("\n\n\nDeseja adicionar mais um material? Digite 1 para sim ou 0 para não: \n");
        if (_break == 0)
        {
            amnt[i+1] = 0;// _break este laço e serve para _breakr um laço mais a frente na impressão da nota fiscal.
            break;
        }
    }
    
    float total[100], totalbought;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n|-------------------------------------------------------\n");
    printf("|---------------------Nota Fiscal-----------------------\n|");
    printf("\n| Vendedor: %s - reg : %d\n|\n|", auxFunc.name, auxFunc.reg);
    for(i=0; i<100; i++){
        if (amnt[i] != 0){
            total[i] = auxMat[i].price * amnt[i];
            printf(" %d- %s  - _id %d \n|", i+1, auxMat[i].name, auxMat[i]._id);
            printf("  -     %d UN X R$%.2f                 T  R$%.2f\n|\n|" ,amnt[i], auxMat[i].price, total[i]);
            totalbought +=total[i]; //adição do price total da bought
        }else{
            break; //_break o laço de impressão caso amnt[i] seja igual a zero.
        }
    }
    printf("\n|\n|Total da bought:                           R$%.2f\n|", totalbought);
    printf("\n|-------------------------------------------------------\n");
    fclose(productsFile);
    fflush(stdin);
    inputChar("\n\n\nAgradecemos pela bought em nossa loja!\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}

int lowAmount()
{
    listProducts matAtual;
    printf("\n------------------------------------------------------\n");
    printf("----------------Verificação de Estoque----------------\n");
    printf("------------------------------------------------------\n\n");
    FILE *productsFile;
    if((productsFile = fopen("dm.bin", "rb")) == NULL)
    {
        fflush(stdin);
        inputChar("\n-----\nErro na abertura ou criaçao do arquivo de parametros\n Contacte o suporte\n\n Tecle enter para fechar o programa\n");
        return 0;
    }//Testa a abertura do arquivo.
    
    printf("\n|-------------------------------------------------------\n|");
    fseek(productsFile, 0*sizeof(listProducts), SEEK_SET); //vai para o inicio do arquivo
    do
    {
        matAtual.minAmount=1;
        matAtual.amount=2;
        fread(&matAtual,sizeof(listProducts),1, productsFile);
        if (matAtual.amount < matAtual.minAmount)
            printf("\n|%s - abaixo do estoque minimo.\n|  |amount atual: %d - amount minima: %d\n|", matAtual.name, matAtual.amount, matAtual.minAmount);
        else if (matAtual.amount == matAtual.minAmount)
            printf("\n|%s - Estoque no minimo.\n|  |amount atual: %d - amount minima: %d\n|", matAtual.name, matAtual.amount, matAtual.minAmount);
            
    }
    while(!feof(productsFile));
    printf("\n|-------------------------------------------------------\n");
    //Verifica os materias cadastrados e se eles estão abaixo do estoque minimo, imprimindo as equivalencias
    fclose(productsFile);
    fflush(stdin);
    inputChar("\n\n\nDigite qualquer tecla para continuar\n");
    fflush(stdin);
    return 1;
}// prompt de final de programa.




