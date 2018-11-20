#include "cartesien.hpp"


void Cartesien::convertir(Polaire& p) const{
		double x=getX();
		double y=getY();
		if (x==0 || y==0){
			p.setAngle(0);
		}
		else{
			p.setAngle(atan(getY()/getX())*180/PI);
		}
		p.setDistance(sqrt(x*x+y*y));
	}

void Cartesien::convertir(Cartesien &p) const{
	p.setX(this->getX());
	p.setY(this->getY());
}

Cartesien::Cartesien(Polaire &p){
		p.convertir(*this);
	}
