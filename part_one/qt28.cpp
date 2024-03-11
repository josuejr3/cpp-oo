#include <iostream>
#include <string>
#include <cctype>

using std::string, std::cout, std::cin, std::endl;


int main(){

    string minhaString;

    cout << "Digite a palavra:" << endl;

    getline(cin, minhaString);

    cout << "Sua string digitada foi: " << minhaString << endl;

    for (char &ch : minhaString) {
        if (isupper(ch) == true){
            ch = tolower(ch);
        }
    }

    cout << "A string em minuscula e: " << minhaString << endl;

    return 0;

}