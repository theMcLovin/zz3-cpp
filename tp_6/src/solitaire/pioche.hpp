// Gardien //---------------------------------------------------------------------------------------
#ifndef __PIOCHE__
#define __PIOCHE__

// Entetes //---------------------------------------------------------------------------------------
#include <vector>
#include <stack>
#include <solitaire/carte.hpp>

// Classe  P i o c h e//---------------------------------------------------------------------------
class Pioche {
 //----------------------------------------------------------------------------------------Attributs
 protected: std::stack<Carte *> pioche;
 protected: std::stack<Carte *> defausse;
 //-------------------------------------------------------------------------------Methodes publiques
 public: Pioche(void);
 public: ~Pioche(void);

 public:
     bool rienRetourne();
     bool toutRetourne();
     bool estVide();
     Carte* getProchaine() const;
     Carte* getVisible() const;
     void ajouter(Carte*);
     bool tirer();
     Carte* retirer();
};


// Fin //-------------------------------------------------------------------------------------------
#endif
