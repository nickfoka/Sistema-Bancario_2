#include <iostream>
#include <string>
using namespace std;
double saldo;
int oper = 0;

double saque() {
    double saq;
    system("cls");
    cout << "insira o valor a ser sacado!\n";
    cin >> saq;
    if (saq <= saldo) {
        saldo -= saq;
        }
    else {
        system("cls");
        cout << "Nao foi possivel sacar: Saldo insuficiente!\n";
        system("pause");
    }

    return 0;
}
double depositar() {
    double depot;
    system("cls");
    cout << "insira o valor a ser depositado!\n";
    cin >> depot;
    saldo += depot;
    return 0;
}

int main()
{
    while (oper < 3) {
        system("cls");
        cout << "Bem vindo ao sistema bancario automatizado!\n" << "Voce tem o saldo de: " << saldo << "R$\n" << "Escolha sua operacao!\n";
        cout << "1 - Saque\n" << "2 - Deposito\n" << "3 - Sair\n";
        cin >> oper;
        switch (oper) {
        case 1:
            saque();
            break;
        case 2:
            depositar();
            break;
        }
    }
    return 1;
}
