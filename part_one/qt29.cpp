#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cin, std::cout, std::string, std::endl, std::remove;

int main(){

    string myString;

    int a = 0x1001;

    getline(cin, myString);

    for (char &ch : myString){
        if (ispunct(ch))
            ch = ' ';
    }

    myString.erase(remove(myString.begin(), myString.end(), ' '), myString.end());

    cout << myString;
}