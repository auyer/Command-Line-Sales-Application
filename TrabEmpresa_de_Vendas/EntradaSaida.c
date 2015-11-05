//
//  EntradaSaida.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int entradaInt(char titulo[]){
    int valor;
    printf(" %s",  titulo);
    scanf(" %d", &  valor);
    return valor;
}

float entradaFloat(char titulo[]){
    char valorStr[10];
    float valorF;
    printf(" %s",  titulo);
    scanf(" %10[^\n]",  valorStr);
    for( int x=0; x<10;x++){
        if (valorStr[x]== ',')
            valorStr[x]='.';
    }
    valorF= atof(valorStr);
    
    return valorF;
}

char *entradaString(char *titulo){
        char *frase = (char*) malloc ((sizeof(char) * sizeof(frase)));
        printf("%s",titulo);
        scanf(" %50[^\n]",  frase);
        return frase;
    
    return frase;
}
char *entradaCPF(char *titulo){
    char *frase = (char*) malloc ((sizeof(char) * sizeof(frase)));
    printf("%s",titulo);
    scanf(" %15[^\n]",  frase);
    return frase;
}

char entradaChar(char *titulo){
    char letra;
    printf(" %s",titulo);
    scanf(" %c", & letra);
    return letra;
}