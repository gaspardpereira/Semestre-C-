#include <iostream>

struct Stack 
{int nb; int size; char* tab;
/*ordre de l'intialisation
Stack est en camelcase avec majuscule sur 
les première lettre genre GaspardPereira*/

/*Constructeur :*/
Stack(int m) : nb(0) , size(m) {
    if (size<=0) {
        throw "stop" ;
        /*ERROR
        throw arrête tout
        la taille était pourrie je jette n'importe 
        quoi, c'est fini, plus de code, 
        c'est une exception : 
        - soit on la gère (on peut définir une 
        façon de traiter le truc qdm)
        - soit on l'insulte  */
    }
    tab = new char[size] ;
    }
/*attention : pas de virgule après size, 
zarb mais comme ça*/

/*Stack(const Stack &rs) = delete ;
C'est un constructeur de copie, ici on interdit la copie

Stack(const Stack &rs) : nb(rs.nb), size(rs.size) {
    tab = nex char[size] ;
    for (int i = 0; i<nb; i++) {
        tab[i]=rs.tab[i]
    };
}
Ici on copie et on a pas besoin de throw car 
on n'a pas de risques d'erreur
*/
void push(char c) {
    if (isFull()) {
        throw "stop" ;
        /*on programme l'erreur
        on pouvait mettre isFull()==true 
        mais c'est sousentendu*/
    }
    tab[nb] = c ; 
    nb = nb + 1 ;
}

char pop() {
    if (isEmpty()) {
        throw "stop" ;
        /*on ne peut pas pop, y a R*/
    }
    nb = nb - 1 ;
    return tab[nb] ;
}

bool isEmpty() const {
    /*cette fct ne modifie pas l'objet 
    donc je peux l'appeler sur des objets constants 
    on le signale par const avant { */
    return nb == 0 ;
    }

bool isFull() const {
    return nb == size ;
    }

void print() {
    for (int i=0 ; i<nb ; i++) {
        std::cout<<tab[i]<<' ';
    } 
    std::cout<<'\n';
}

char top() {
    if (isEmpty()) {
        throw "stop" ;
    }
    return tab[nb - 1] ;
}
/*
char c =(*this).pop() ;
(*this).push(c) ;
return c ;
OK mais pas OK niveau complexité, on pourrait écrire
comme ça si on voulait top de façon globale sans 
pouvoir mofifier la classe 
mais très complexe car appelle 2 méthodes */

~Stack() {
    delete[] tab ;
    }
/*déstructeur*/

} ;

int main () {
    Stack s1(3) ;
    s1.push('g') ;
    s1.push('a') ;
    s1.push('s') ;
    s1.print() ; 
    char c3 = s1.pop() ; 
    char c2 = s1.pop() ; 
    char c1 = s1.top() ;
    std::cout<<c1<<c2<<c3<<'\n' ;
}

/*
(*this).tab
this->tab 
jsp a coi ca sert */