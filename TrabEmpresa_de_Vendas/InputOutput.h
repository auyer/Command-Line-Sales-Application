//
//  inputSaida.h
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#ifndef inputSaida_h
#define inputSaida_h


int inputInt(char *title);
// Parametros de input: String para title de pedida para o usuario
// Retorna um value int
//Autor: Rafael Passos

float inputFloat(char *title);
// Parametros de input: String para title de pedida para o usuario
// Retorna um value float de até 8 caracteres (000000,00)
//Autor: Rafael Passos

char *inputString(char *title);
// Parametros de input: String para title de pedida para o usuario
//Retorna Strig TODA MAIUSCULA digitada pelo usuario ( o usuario nao
//precisa digitar maiuscolo, a funçao faz isso.) de até 50 caracteres
//Autor: Rafael Passos

char *inputReg(char *title);
// Parametros de input: String para title de pedida para o usuario
//Retorna Strig digitada pelo usuario de até 15 caracteres
//Autor: Rafael Passos

char inputChar(char *title);
// Parametros de input: String para title de pedida para o usuario
//Retorna um char digitado pelo usuario
//Autor: Rafael Passos


#endif /* inputSaida_h */
