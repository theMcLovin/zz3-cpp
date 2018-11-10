#ifndef __NUAGES__
#define __NUAGES__
#include "polaire.hpp"
#include "cartesien.hpp"

using namespace std;

class Nuage{
public:
	void ajouter(Point &p){n.push_back(&p);}
	unsigned size(){return n.size();}
	typedef std::vector<Point*>::const_iterator const_iterator;
	typedef std::vector<Point*>::iterator iterator;
	const_iterator begin() const{return n.begin();}
	const_iterator end() const{return n.end();}

private:
	vector<Point*> n;
};

Cartesien barycentre(Nuage n){
	double sizeX=0;
	double sizeY=0;
	int cnt=0;
	for (Nuage::const_iterator it=n.begin(); it!=n.end(); ++it){
		Cartesien c;
		(*it)->convertir(c);
		sizeX+=c.getX();
		sizeY+=c.
		getY();
		++cnt;
	}
	Cartesien c(sizeX/cnt, sizeY/cnt);
	return c;
}
#endif
