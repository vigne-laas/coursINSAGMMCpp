#ifndef COURSINSAGMMCPP_RECTANGLE_H
#define COURSINSAGMMCPP_RECTANGLE_H

#include "Polygone.h"

class Rectangle: public Polygone
{
protected:
    float longueur_;
    float largeur_;
public:
    Rectangle(float longueur,float largeur);

    void setDimension(float longueur,float largeur);
    void displayDimension();

    virtual float perimetre();
    virtual void afficherCaracteristiques();
};


#endif //COURSINSAGMMCPP_RECTANGLE_H
