#ifndef __CARTESIEN__
#define __CARTESIEN__
#include "point.hpp"
#include "polaire.hpp"

const double 
PI = 3.1415;

class Polaire;
class Cartesien:public Point{
public:
	Cartesien(double x_ = 0, double y_ = 0){
		x = x_;
		y = y_;
	};
	Cartesien(Polaire &p);

	void setX(double x_) {x = x_;}
	void setY(double y_) {y = y_;}
	double getX() const{return x;}
	double getY() const{return y;}
	virtual void afficher(std::stringstream &f) const{
		f << "(x=" << getX() << ";y=" << getY()<< ")";
}
	void convertir(Polaire &p)const;
	void convertir(Cartesien &p) const;
	
private:
	double x;
	double y;
};

#endif