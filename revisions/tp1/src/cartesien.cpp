#include "cartesien.hpp"


void Cartesien::convertir(Polaire& p) const{
		p.setAngle(atan(getY()/getX())*180/PI);
		p.setDistance(sqrt(x*x+y*y));
	}

void Cartesien::convertir(Cartesien &p) const{
	p.setX(this->getX());
	p.setY(this->getY());
}

Cartesien::Cartesien(Polaire &p){
		p.convertir(*this);
	}
