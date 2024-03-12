#include <iostream>

void swap(int*,int*);
//je déclare que la fonction va exister sinon je dois l'écrire avant main dans l'ordre du programme

int main() {
    int a = 17;
    int b = 82;
    swap(&a,&b);
    std::cout<<a<<' '<<b<<std::endl;
}

void swap(int* x,int* y) {
    int c = *x;
    *x = *y ;
    *y = c ;
}