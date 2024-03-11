#include <iostream>
#include <string>
#include <cctype>

using std::cin, std::cout, std::string, std::endl;

int main(){

    string minhaString;
    bool contem = false;

    cout << "Digite uma string: " << endl;
    getline(cin, minhaString);

    for (char ch: minhaString) {
        islower(ch) ? contem = true : contem = false;
        if (contem)
            break;
    }

    contem ? cout << "A palavra contem letras minusculas" : cout << "A palavra nao contem letras minusculas";

}
