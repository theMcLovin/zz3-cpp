#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <sstream>
#include<math.h>
class Cartesien;
class Polaire;

using namespace std;

class Point{
public:
	Point(){};
	virtual void afficher(std::stringstream &f) const = 0;
	virtual void convertir(Cartesien &p) const=0;
	virtual void convertir(Polaire &p) const=0;
};


#endif