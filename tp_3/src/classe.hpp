// Gardien //---------------------------------------------------------------------------------------
#ifndef _CLASSE_
#define _CLASSE_

#include "echantillon.hpp"

class Classe{
	private:
		double bornInf;
		double bornSup;
		unsigned int qte;
	public:
		Classe(double bi = 0, double bs = 0){bornInf=bi; bornSup=bs; qte=0;}
		const double getBorneInf() const{return bornInf;}
		const double getBorneSup() const{return bornSup;}
		const unsigned int getQuantite() const{return qte;}
		void setBorneInf(double bi){bornInf=bi;}
		void setBorneSup(double bs){bornSup=bs;}
		void setQuantite(unsigned q){qte=q;}
		void ajouter(){++qte;}

};

#endif
