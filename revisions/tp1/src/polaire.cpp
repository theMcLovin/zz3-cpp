#include "polaire.hpp"



void Polaire::convertir(Cartesien & p) const{
		double d = getDistance();
		double a = getAngle()*PI/180;
		p.setX(d*cos(a));
		p.setY(d*sin(a));
	}


void Polaire::convertir(Polaire & p) const{
	p.setAngle(this->getAngle()); 
	p.setDistance(this->getDistance()); 
}

Polaire::Polaire(Cartesien &p){
		p.convertir(*this);
	}