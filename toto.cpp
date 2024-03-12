#include <cmath>
#include <iostream>

/*
Voilà, ceci est un commentaire 
*/

// celui ci aussi 

int i;
// si il n'y a pas d'initialisation (comme la) pour une variable 
// globale (définie hors du main()), c'est le 0 du type

// on peut créer un type avec struct ou class (c'est la même chose)
class DataFrame{
    int height=0;
    int width=0;
};
// ATTENTION ici le ; est super important

int main() {
    std::cout <<'A'<<std::endl; 
    int j;
    DataFrame df ;
    std::cout<<i<<' '<<j<<' '<<sizeof(j)<<std::endl;
}
