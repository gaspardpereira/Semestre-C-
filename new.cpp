#include <iostream>

int i = 12 ;
// i est ici dans les données globales

/*
int main() {
    int i = 12;
    // ce i là est dans la pile, pas dans les données globales, c'est pas le même
    int *pi = new int ;
    // new = opérateur du langage qui permet de creer
    // dans le tas (heap, mémoire de l'ordi)
    // une adresse de zone
    // * = est l'adresse (ATTENTION sans espace entre * et pi)
    // se lit dans l'autre sens 
    delete pi;
}
*/

int main() {
    int i = 12 ;
    int j {2147483647};
    int l = 2147483648;
    int k {2147483648};
    int *pi = &i;
    // &i est l'adresse de i
    i=14;
    (*pi)=(*pi)+3;
    // ca renvoie 17, c'est la valeur à l'adresse pi
}

