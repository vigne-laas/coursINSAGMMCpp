#ifndef VERSIONPERSO_CERCLE_H
#define VERSIONPERSO_CERCLE_H


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


#endif //VERSIONPERSO_CERCLE_H
