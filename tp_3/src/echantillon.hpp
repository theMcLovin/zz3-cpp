// Gardien //---------------------------------------------------------------------------------------
#ifndef _ECHANTILLON_
#define _ECHANTILLON_

// Entetes //---------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "valeur.hpp"

using namespace std;

class Echantillon {
 private:
   vector<Valeur> ech;
 public:
   Echantillon(){}
   unsigned getTaille(){return ech.size();}
   void ajouter(double v){ech.push_back(v);}

};

#endif
