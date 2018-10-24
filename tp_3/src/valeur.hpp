// Gardien //---------------------------------------------------------------------------------------
#ifndef _VALEUR_
#define _VALEUR_

// Entetes //---------------------------------------------------------------------------------------
#include <iostream>
#include <vector>

class Valeur {
 private:
    double valeur;
 public: 
   Valeur(double v=0.0) {valeur=v;}
   double getNombre() const{return valeur;}
   void setNombre(const double v){valeur = v;}

};

#endif
