// Aula sobre switch
#include <iostream>

using namespace std;
/*
int main(){
    int num = 9;
// SWITCH COMANDO DE ESCOLHA - MENU

    switch (num)
    {
    case 9:
        cout << "Número 9." << endl;
        break;
        // caso eu removo o break o switch entra no próximo case e executa o comando
    case 10:
        cout << "Número 10." << endl;
        break;
        // agora o programa imprime o num 10 e o 11 tambem
    case 11:
        cout << "Número 11.";
        break;
    default: // COMANDO OPCIONAL
        cout << "Número não encontrado.";
    }
    // Como utilizar o switch para tratamento de erros
    char op = 'q';
    switch (op)
    {
    case 'Q':
        cout << "Você saiu do sistema" << endl;
    case 'q':
        cout << "Você saiu do sitema" << endl;
        break;
    default:
        cout << "Comando inválido" << endl;
    }
    return 0;
    // durante os cases não posso utilizar expressões, apenas constantes
}
*/
// EXERCICIO
/* docstring
calculadora
Operações permitidas:
+ -> adição 
- -> subtração 
* -> multiplicação
/ -> divisão
*/
int main(){
    int num1, num2, op; // operação
    float div;

    cout << "Digite o primeiro número: ";
    // comando de entrada de dados cin
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Menu:\n1 - adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nSua opção: ";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Operação de adição:\n"; 
        cout << (num1 + num2) << endl;
        break;
    case 2:
        cout << "Operação de subtração:\n"; 
        cout << (num1 - num2) << endl;
        break;
    case 3:
        cout << "Operação de multiplicação:\n"; 
        cout << (num1 * num2) << endl;
        break;
    case 4:
        cout << "Operação de divisão:\n"; 
        div = (float) num1 / num2;
        cout << "divisão" << div << endl;
        break;
    default:
        cout << "Operação inválida";
    }

    return 0;
}