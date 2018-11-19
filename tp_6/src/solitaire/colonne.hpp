#ifndef _COLONNE_HPP_
#define _COLONNE_HPP_


#include "carte.hpp"
#include "main.hpp"
#include <stack>

class Colonne{
private:
    std::vector<Carte*>;

public:
    bool estVide();
    int getTaille();
    Carte* getSommet();
    Carte* getCarte(int);
    void ajouter(Main&);
    void ajouter(Carte*);
    void retirer(int, Main&);

};
#endif
