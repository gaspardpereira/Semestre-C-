#include <iostream>
#include <string>

string i = 'variable non modifiée' ;

int main() {
    char c;
    std::cout<<"entrez un char : ";
    std::cin>>c;
    if (c=='q') {
        i = 'gagné, bravo !';
        } 
    else {
        i = 'perdu, retente le !';
        };
    std::cout<<i<<std::endl;
}

