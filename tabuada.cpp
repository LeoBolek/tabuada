#include <iostream>

using namespace std;

int main() {
    //1) Perguntar a tabuada para o usuario e armazenar o valor numa variavel:
    cout << "Por favor, informe a tabuada que voce deseja: ";

    int n = 0;
    cin >> n;

    //2) Implementacao de um laço de repeticao FOR:
    for(int i = 1; i <= 10; i++) {
        //3) Imprimir a tabuada na tela:
        cout << i << " x " << n << " = " << i * n << endl << endl;
    }

    cout << "Obrigado por utilizar este programa! :)" << endl;
    system("pause");
    return 0;
}

