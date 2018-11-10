#include "point.hpp"
std::stringstream& operator<<(std::stringstream& f,const Point& p){p.afficher(f); return f;}
