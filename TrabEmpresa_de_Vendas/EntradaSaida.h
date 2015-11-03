//
//  EntradaSaida.h
//  TrabEmpresa de Vendas
//
//  Created by Rafael Auyer on 10/21/15.
//  Copyright © 2015 Rafael Auyer. All rights reserved.
//

#ifndef EntradaSaida_h
#define EntradaSaida_h


int entradaInt(char *titulo);
// Parametros de entrada: String para Titulo de pedida para o usuario
// Retorna um valor int
//Autor: Rafael Passos

float entradaFloat(char *titulo);
// Parametros de entrada: String para Titulo de pedida para o usuario
// Retorna um valor float de até 8 caracteres (000000,00)
//Autor: Rafael Passos

char *entradaString(char *titulo);
// Parametros de entrada: String para Titulo de pedida para o usuario
//Retorna Strig digitada pelo usuario de até 50 caracteres
//Autor: Rafael Passos

char *entradaCPF(char *titulo);
// Parametros de entrada: String para Titulo de pedida para o usuario
//Retorna Strig digitada pelo usuario de até 15 caracteres
//Autor: Rafael Passos

#endif /* EntradaSaida_h */
