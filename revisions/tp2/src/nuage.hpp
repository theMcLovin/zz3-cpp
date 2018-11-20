#ifndef __NUAGES__
#define __NUAGES__
#include "polaire.hpp"
#include "cartesien.hpp"

using namespace std;

template <typename T> class Nuage{
	public:
	void ajouter(const T &p){n.push_back(p);}
	unsigned size(){return n.size();}
	typedef typename std::vector<T>::const_iterator const_iterator;
	typedef typename std::vector<T>::iterator iterator;
	const_iterator begin() const{return n.begin();}
	const_iterator end() const{return n.end();}

private:
	vector<T> n;
};

Cartesien barycentre_v1(Nuage<Cartesien> n){
	double sizeX=0;
	double sizeY=0;
	int cnt=0;
	for (Nuage<Cartesien>::const_iterator it=n.begin(); it!=n.end(); ++it){
		Cartesien c;
		it->convertir(c);
		sizeX+=c.getX();
		sizeY+=c.
		getY();
		++cnt;
	}
	(cnt==0)?cnt=1:cnt=cnt;
	Cartesien c(sizeX/cnt, sizeY/cnt);
	return c;
}

Polaire barycentre_v1(Nuage<Polaire> n){
	double sizeX=0;
	double sizeY=0;
	int cnt=0;
	for (Nuage<Polaire>::const_iterator it=n.begin(); it!=n.end(); ++it){
		Cartesien c;
		it->convertir(c);
		sizeX+=c.getX();
		sizeY+=c.getY();
		++cnt;
	}
	(cnt==0)?cnt=1:cnt=cnt;
	Cartesien c(sizeX/cnt, sizeY/cnt);
	Polaire p;
	c.convertir(p);
	return p;
}

/*
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
*/
/*
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


class BarycentreCartesien{
	public:
		Cartesien operator()(Nuage &
			n){return barycentre(n);}
};

class BarycentrePolaire{
	public:
		Polaire operator()(Nuage &n){Cartesien c = barycentre(n); Polaire p; c.convertir(p); return p;}
};*/

#endif
