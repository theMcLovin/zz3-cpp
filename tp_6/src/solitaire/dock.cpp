#include "dock.hpp"

bool Dock::estVide(){
    return(dock.size()==0);
}

Carte* Dock::getSommet(){
    return dock.top();
}

void Dock::ajouter(Carte* c){
    dock.push(c);
}
Carte* Dock::retirer(){
    Carte* tmp = dock.top();
    dock.pop();
    return tmp;
}
