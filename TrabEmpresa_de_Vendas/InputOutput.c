//
//  inputOutput.c
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int inputInt(char title[]){
    int value;
    fflush(stdin);
    printf(" %s",  title);
    scanf(" %d", &  value);
    return value;
}

float inputFloat(char title[]){
    char valueStr[10];
    float valueF;
    fflush(stdin);
    printf(" %s",  title);
    scanf(" %10[^\n]",  valueStr);
    for( int x=0; x<10;x++){
        if (valueStr[x]== ',')
            valueStr[x]='.';
    }
    valueF= atof(valueStr);
    
    return valueF;
}

char *inputString(char *title){
    int i;
    fflush(stdin);
    char *phrase = (char*) malloc ((sizeof(char) * sizeof(phrase)));
    printf("%s",title);
    scanf(" %50[^\n]",  phrase);
    while(phrase[i]){
        phrase[i]= (toupper(phrase[i]));
        i++;
    }
    fflush(stdin);
    return phrase;
}
char *inputReg(char *title){
    fflush(stdin);
    char *phrase = (char*) malloc ((sizeof(char) * sizeof(phrase)));
    printf("%s",title);
    scanf(" %15[^\n]",  phrase);
    fflush(stdin);
    return phrase;
}

char inputChar(char *title){
    char letra;
    fflush(stdin);
    printf(" %s",title);
    scanf(" %c", & letra);
    fflush(stdin);
    return letra;
}