// Desafio 21

#include <iostream>
#include <climits>

using namespace std;

int main(){
    int a , b ; 
    cout << "Digite o primeiro numero: " ; 
    cin >> a;
    
    cout << "Digite o segundo numero: ";
    cin >> b;

    if (a > INT_MAX - b) {
        cout << "ERRO: A soma causaria Overflow!" << endl;
        cout << "O limite maximo e: " << INT_MAX << endl;
    } else {
        int soma = a + b;
        cout << "Soma segura: " << soma << endl;
    }

    return 0;
}
