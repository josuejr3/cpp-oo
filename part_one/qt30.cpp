#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

int main(){

 //A


    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i ; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

// B

    int k = 5;
    string s = " ";

    for (int i = 5; i > 0; --i){
        for (int  j = k;  j > 0; --j) {
            cout << "*";
        }
        cout << endl << s;
        k = k -1;
        s = s + " ";
    }

    cout << endl;

// C

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if ((i == 2) or (j == 2) or ((i % 2 != 0) and (j % 2 != 0)))
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    cout << endl;

// D

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
            if ((i == 3 or j == 3) or ((i > 1) and ((j < 6 and j > 0))) or (i == 1 and (j == 2 or j == 4)))
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }


}

