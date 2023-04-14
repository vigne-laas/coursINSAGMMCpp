#ifndef VERSIONPERSO_TRIANGLEEQUILATERAL_H
#define VERSIONPERSO_TRIANGLEEQUILATERAL_H


#include "Polygone.h"


class TriangleEquilateral : public Polygone
{
protected:
    float cote_;
public:
    TriangleEquilateral(float cote);

    virtual float perimetre();
    virtual void afficherCaracteristiques();
};


#endif //VERSIONPERSO_TRIANGLEEQUILATERAL_H
