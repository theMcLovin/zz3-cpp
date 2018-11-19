#ifndef _DOCK_HPP_
#define _DOCK_HPP_
#include "carte.hpp"
#include <stack>

class Dock{

private:
    std::stack<Carte*> dock;
public:
    bool estVide();
    Carte* getSommet();
    void ajouter(Carte*);
    Carte* retirer();

};


#endif
