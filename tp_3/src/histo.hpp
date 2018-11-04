// Gardien //---------------------------------------------------------------------------------------
#ifndef _HISTO_
#define _HISTO_

#include "classe.hpp"

class Histo{
public:
	Histo(unsigned size, double bi, double bs){his.reserve(size);bornInf=bi;bornSup=bs;}
	const vector<Classe> getClasses(){return his;};
	double getBornInf(){return bornInf;};
	double getBornSup(){return bornSup;};
	unsigned getSize(){return his.size();}
private:
	vector<Classe> his;
	double bornInf;
	double bornSup;


};

#endif