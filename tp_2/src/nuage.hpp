// Gardien //---------------------------------------------------------------------------------------
#ifndef _NUAGE_HPP_
#define _NUAGE_HPP_

// Entetes //---------------------------------------------------------------------------------------
#include <vector>
#include <cartesien.hpp>
#include <polaire.hpp>

// Declarations anticipees //-----------------------------------------------------------------------
template<typename T>
class Nuage;

// Declarations fonctions //------------------------------------------------------------------------
template<typename T>
Cartesien barycentre(const Nuage<T> &);

// Classe  N u a g e //-----------------------------------------------------------------------------
template<typename T>
class Nuage {

//---------------------------------------------------------------------------------------------Type
 public: typedef typename std::vector<T>::iterator       iterator;
 public: typedef typename std::vector<T>::const_iterator const_iterator;
 //----------------------------------------------------------------------------------------Attributs
 protected: std::vector<T> points_;
 //---------------------------------------------------------------------------------------Accesseurs
 public: unsigned size(void) const { return points_.size(); }

 public: typename std::vector<T>::const_iterator begin() const { return points_.begin(); }
 public: typename std::vector<T>::const_iterator end() const { return points_.end(); }

 public: typename std::vector<T>::iterator begin() { return points_.begin(); }
 public: typename std::vector<T>::iterator end() { return points_.end(); }
 //-------------------------------------------------------------------------------Methodes publiques
 public: void ajouter(const T & t) { points_.push_back(t); }
};

// Classe  B a r y c e n t r e C a r t e s i e n //-------------------------------------------------
template<typename T>
class BarycentreCartesien {
 public: Cartesien operator () (const Nuage<T> & nuage) { return barycentre(nuage); }
};

// Classe  B a r y c e n t r e P o l a i r e //-----------------------------------------------------
template<typename T>
class BarycentrePolaire {
 public: Polaire operator () (const Nuage<T> & nuage) { return Polaire(barycentre(nuage)); }
};

//----------------------------------------------------------------------------------------Barycentre
template<typename T>
Cartesien barycentre(const Nuage<T> & nuage) {
 Cartesien c;
 double x = 0.0;
 double y = 0.0;
 int n = 0;

 for (typename Nuage<T>::const_iterator i = nuage.begin(); i<nuage.end(); ++i) {
  (*i)->convertir(c);
  x+=c.getX();
  y+=c.getY();
  ++n;
 }

 return Cartesien(x/n,y/n);
}


// Fin //-------------------------------------------------------------------------------------------
#endif