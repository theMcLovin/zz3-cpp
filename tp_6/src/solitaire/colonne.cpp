#include "colonne.hpp"

bool Colonne::estVide(){
    return(colonne.size()==0);
}



Carte* Colonne::getSommet(){
    return colonne.at(colonne.getSize()-1);
}

void Colonne::ajouter(Main& m){
    colonne.push(m);
}

Carte * getCarte(int pos){
    return colonne.at(pos);
}

Carte* Colonne::retirer(){
    //faire tant que size=! pos popback
    Main.pushback(colonne.pop_back());
}
