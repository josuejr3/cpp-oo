#include <iostream>

using std::cin, std::cout, std::endl;

int main(){

    float qtdLitrosfaltantes = 0, qtdKmDirigidos = 0, totalLconsumidos = 0;

    while (true){
        cout << "Digite a quantidade de km faltantes para finalizar o percurso: " << endl;
        cin >> qtdKmDirigidos;
        if (qtdKmDirigidos != -1) {
            cout << "Digite a quantidade de litros para encher o tanque: " << endl;
            cin >> qtdLitrosfaltantes;
            totalLconsumidos += qtdLitrosfaltantes;
            cout << "O consumo foi de: " << (qtdKmDirigidos/qtdLitrosfaltantes) << endl;
        } else{ break; }
    }
    cout << "Total de litros consumidos: " << totalLconsumidos;

}