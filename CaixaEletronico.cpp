// Desafio 34

#include <iostream>

using namespace std ;

int main(){
    double valor  ; 
    double saldo ;
    char opcao ;

    cout << "Digite o seu saldo atual (R$): "; 
    cin >> saldo ;

    do {
        cout << "Digite o valor que deseja depositar (R$): " ;
        cin >> valor ; 
        cout << "Deseja digitar novos valores (s / n): " ;
        cin >> opcao ; 
        saldo = saldo + valor  ;
        cout << " \n Mostar valores \n" << saldo ;
        
        while ( opcao != 'N'){
            if ( opcao == 'S' || opcao == 's'){
            cout << "Digite o valor que deseja depositar (R$): " ;
            cin >> valor ; 
            saldo = saldo + valor  ;
            cout << " \n Mostar valores \n" << saldo ;
        }

        else if (opcao == 'N' || opcao == 'n'){
            cout << "Fim da transacao " ;
             cout << " \n Mostar valores \n" << saldo ;
        }
        
        }
        
    } while(valor < 0.0) ;
}