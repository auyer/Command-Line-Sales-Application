//
//  EntradaSaida.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int entradaInt(char titulo[]){
    int valor;
    fflush(stdin);
    printf(" %s",  titulo);
    scanf(" %d", &  valor);
    return valor;
}

float entradaFloat(char titulo[]){
    char valorStr[10];
    float valorF;
    fflush(stdin);
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
    int i;
    fflush(stdin);
    char *frase = (char*) malloc ((sizeof(char) * sizeof(frase)));
    printf("%s",titulo);
    scanf(" %50[^\n]",  frase);
    while(frase[i]){
        frase[i]= (toupper(frase[i]));
        i++;
    }
    fflush(stdin);
    return frase;
}
char *entradaCPF(char *titulo){
    fflush(stdin);
    char *frase = (char*) malloc ((sizeof(char) * sizeof(frase)));
    printf("%s",titulo);
    scanf(" %15[^\n]",  frase);
    fflush(stdin);
    return frase;
}

char entradaChar(char *titulo){
    char letra;
    fflush(stdin);
    printf(" %s",titulo);
    scanf(" %c", & letra);
    fflush(stdin);
    return letra;
}