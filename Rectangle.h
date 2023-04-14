#ifndef VERSIONPERSO_RECTANGLE_H
#define VERSIONPERSO_RECTANGLE_H

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


#endif //VERSIONPERSO_RECTANGLE_H
