# include <iostream>

// AULA SOBRE IF
using namespace std;

int main(){
    /*
    int dinheiro = 10;
    if(dinheiro > 10){
        cout << "Eu vou ao cinema!" << endl;
    }else{
        cout << "Eu não vou ao cinema!" << endl;
    }
    // posso não utilizar as chaves se eu tenho só uma linha de código dentro do if
    if(dinheiro >= 10) cout << "Eu vou ao cinema!" << endl;
    else cout << "Eu não vou ao cinema!" << endl;
    */
    /*
    int num = 4;
    if (num > 5){
        if(num < 10){
            cout << "Numéro maior do que cinco e menor ou igual a dez.";
        } else{
            if (num == 10){
                cout << "Número é dez.";
            }else{
                cout << "Número maior do que dez";
            }
        }
    }else{
        cout << "Número menor ou igual a 5.";
    }
    */
    
// SOBRE OPERADORES LÓGICOS
    // and == &&
    // or == ||
    // not == !
    int n = 11;
    /*
    if((n % 2== 0) && n < 20){
        cout << "É par e menor do que 20.";
    } else if((n % 2 == 0) || n<20){
        cout << "É menor do que 20 ou é par.";
    }
    if (!(n % 2 == 0)){
        cout << "É ímpar!";
    }
   */
// VARIÁVEIS BOOLEANAS
    // 0 para False
    // 1 para True
    /*
    bool var = 10 > 20;
    if(var){
        cout << "Verdadeiro";
    }else{
        cout << "Falso";
    }
    return 0;
    */
   bool var1 = false;
   bool var2 = true;
   if(!var1 && var2){
       cout << "Ta dando certa sácoisa";
   }
}

