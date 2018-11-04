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
   vector<Valeur>::iterator begin(){
	   	return ech.begin();
   }
   vector<Valeur>::iterator end(){
	   	return ech.end();
   }

   Valeur getMinimum(){
   	if (this->begin()==this->end()){
   		throw std::domain_error("Echantillon is empty");
   	}
   	Valeur min = *(this->begin());
   	for (std::vector<Valeur>::iterator i = this->begin(); i != this->end(); ++i){
   		if (i->getNombre() < min.getNombre()){
   			min = *i;
   		}
   	}
   	return min;
   }

   Valeur getMaximum(){
   	if (this->begin()==this->end()){
   		throw std::domain_error("Echantillon is empty");
   	}
   	Valeur max = *(this->begin());
   	for (std::vector<Valeur>::iterator i = this->begin(); i != this->end(); ++i){
   		if (i->getNombre() > max.getNombre()){
   			max = *i;
   		}
   	}
   	return max;
   }

};

#endif
