#include <iostream>

using namespace std;

int main() {
    int A, B;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    int soma = A + B;
    int subtracao = A - B;
    int multiplicacao = A * B;
    int divisao = A / B;
    int resto = A % B;

    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Multiplicação = " << multiplicacao << endl;
    cout << "Divisão = " << divisao << endl;
    cout << "Resto = " << resto << endl;

    return 0;
}