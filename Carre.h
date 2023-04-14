#ifndef VERSIONPERSO_CARRE_H
#define VERSIONPERSO_CARRE_H


#include "Rectangle.h"
class Carre : public Rectangle
{
protected:
    float cote_;

public:
    explicit Carre(float cote);

    virtual void afficherCaracteristiques();


};


#endif //VERSIONPERSO_CARRE_H
