#include <iostream>

using std::cout, std::cin, std::endl;

void noChange();

int main(){

    noChange();
    noChange();
    noChange();
    noChange();
    noChange();
}

void noChange(){
    static int v = 0;
    cout << v++ << endl;
}