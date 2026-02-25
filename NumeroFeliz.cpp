#include<iostream>
using namespace std ;

int main(){
    int num ; 

    cout << "Digite um numero: \n";
    cin >> num ;

    while(num != 1 && num != 4){
        int soma = 0 ;
        while (num > 0){
           int digito = num % 10 ; // Pegar ultimo digito (81) - 8 e 1
           soma += digito * digito ; // Soma - 8*8 + 1*1 - 64 + 1 = 65
           num /= 10 ; // Quebra o numero anterior 65 
        }
        num = soma ;
    }
    
    if(num == 1){
        cout << "Um numero feliz \n";
    }
    else{
        cout << "Nao e feliz \n";
    }

    return 0 ;
}