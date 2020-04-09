// aula sobre caracter char
#include <iostream>

using namespace std;

int main(){
    char letra = 'a';
    // para variavris char inicializo com aspas simples
    // utilizando a tabela ASSCI
    cout << (int)letra << endl;
    // faço um cast para me mostrar o numero ASSCI da letra
    char letra2 = 97;
    cout << letra2 << endl;
    // nesse caso me mostra a letra a porque usei o código da palavra
    letra2 = 'b';
    int soma = letra + letra2;
    cout << soma << endl;
    cout << (char)soma << endl; // vai printar um caracter da tabela ASSCI correspondente a esse número
    soma = '\'';
    // uso barra invertida para ocultar parenteses
    cout << (char)soma << endl;
}