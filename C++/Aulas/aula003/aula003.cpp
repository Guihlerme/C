//
//  main.cpp
//  aula003
//
//  Created by Gabriela on 08/04/20.
//  Copyright © 2020 Guilherme. All rights reserved.
//Aula sobre OPERADORES

#include <iostream>

using namespace std;

int main(){
    // exemplo de operadores binários "+", "-" - opera sobre dois argumentos 

    int n1, n2;
    float resultado;
    n1 = 10;
    n2 = 20;
    resultado = (float)n1 / n2; // resultado da zero pq né inteiro e 0.5 não é!
    // logo preciso tranformar uma das variáveis em float, faço um cast implicito

    cout << resultado << endl;

    // exemplo de operadores unários
    int n = 10;
    n ++; // exemplo de operador unário ou então n--
    n += 1; // outro exemplo de operador unário, pode ser *, +, -, /
    n = -n;
    cout << n << endl;

    // odem de prescedencia no print
    n = 10;
    cout << n++ << endl; // printa 10 porque realiza a soma depois
    cout << ++n << endl; // printa 12 porque somou como o 1 anterior
    cout << ++n << endl; // printa 13

    // outro exemplo
    n = 10;
    int num2 = n++;
    cout << num2 << endl; // resultado será 10
    cout << n << endl; // resultado será 11

    n = 10;
    num2 = ++n;
    cout << num2 << endl; // resultado será 11
    cout << n << endl; // reusltado será 11
    return 0;
}