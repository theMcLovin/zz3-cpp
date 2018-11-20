#include "pioche.hpp"

bool Pioche::rienRetourne(){
    return (defausse.size()==0);
}

bool Pioche::toutRetourne(){
    return (pioche.size()==0);
}
bool Pioche::estVide(){
    return(toutRetourne() && rienRetourne());
}

Carte* Pioche::getProchaine() const {
    return (pioche.top());
}

Carte* Pioche::getVisible() const{
    return(defausse.top());
}

void Pioche::ajouter(Carte* c){
    pioche.push(c);
}
bool Pioche::tirer(){
    if (getProchaine()!=0){
        defausse.push(pioche.top());
        pioche.pop();
        return true;
    }
    return false;
}
Carte* Pioche::retirer(){
    Carte * tmp = defausse.top();
    defausse.pop();
    return tmp;
}
