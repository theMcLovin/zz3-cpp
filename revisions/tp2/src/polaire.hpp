#ifndef __POLAIRE__
#define __POLAIRE__
#include "point.hpp"
#include "cartesien.hpp"

class Cartesien;
class Polaire:public Point{
public:
	Polaire(double a = 0, double d = 0){
		angle = a;
		distance = d;
	};
	Polaire(Cartesien &p);

	void setDistance(double d) {distance = d;}
	void setAngle(double a) {angle = a;}
	double getDistance() const{return distance;}
	double getAngle() const{return angle;}
	virtual void afficher(std::stringstream &f) const{
		f << "(a=" << getAngle() << ";d=" << getDistance() << ")";
}
	void convertir(Cartesien &p) const;
	void convertir(Polaire & p) const;
private:
	double angle;
	double distance;
};


#endif