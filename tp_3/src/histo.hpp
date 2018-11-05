// Gardien //---------------------------------------------------------------------------------------
#ifndef _HISTO_
#define _HISTO_

#include "classe.hpp"

class Histo{
public:
	Histo(double bi, double bs, int size){
        his.reserve(size);
        int step = (bs-bi)/size;
        for (int i=0; i<size; ++i){
            Classe c(bi+(i*step), bi+(i*step)+2);
            //on ne peut pas acceder à his[i] car ça n'existe pas encore, reserve bloque juste l'espace
            his.push_back(c);
        }
        bornInf=bi;
        bornSup=bs;
	}

	void ajouter(Echantillon e){
        for (int i=0; i< (int)e.getTaille();++i){
            for (int j=0; j< (int)his.size(); ++j){
                if (e.getValeur(i).getNombre() >= his[j].getBorneInf() && e.getValeur(i).getNombre() < his[j].getBorneSup()){
                    his[j].ajouter();
                }
            }
        }
    }

	const vector<Classe>& getClasses(){return his;};
	const double getBornInf() const{return bornInf;};
	const double getBornSup() const{return bornSup;};
	const unsigned getSize() const{return his.size();}
    typedef vector<Classe> classes_t;
private:


	vector<Classe> his;
	double bornInf;
	double bornSup;


};

#endif
