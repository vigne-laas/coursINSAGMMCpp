#ifndef COURSINSAGMMCPP_CERCLE_H
#define COURSINSAGMMCPP_CERCLE_H


#include "Figure.h"

class Cercle : public Figure
{
protected:
    float rayon_;
public:
    Cercle(float r);
    void setRayon(float r);
    void displayRayon();
    virtual float perimetre();
    virtual void afficherCaracteristiques();

};


#endif //COURSINSAGMMCPP_CERCLE_H
