//
// Created by Josué Júnior on 13/02/2024.
//
#include <iostream>
#include <string>

int main(){

    std::string aluno;
    float notas[3], media = 0.0;

    std::cout << "Digite o nome do aluno: " << std::endl;
    std::cin >> aluno;

    for (int j = 0; j < 3; ++j) {
        std::cout << "Digite a " << j+1 << "a nota" << std::endl;
        std::cin >> notas[j];
    }

    media = (notas[0]*3 + notas[1]*4 + notas[2]*5)/(3 + 4 + 5);
    std::cout << "O aluno " << aluno << " obteve media " << media << std::endl;

    return 0;

}