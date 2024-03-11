//
// Created by Josué Júnior on 13/02/2024.
//

#include <iostream>

void swap(int& a, int& b){

    int test = a;
    a = b;
    b = test;

}

int main(){
    std::cout << "Digite dois numeros" << std::endl;
    int u, v;
    std::cin >> u >> v;
    std::cout << "O valor de u e: " << u << std::endl << "O valor de v e: " << v << std::endl;
    swap(u, v);
    std::cout << "O valor de u e: " << u << std::endl << "O valor de v e: " << v << std::endl;


}