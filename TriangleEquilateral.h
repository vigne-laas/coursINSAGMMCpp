#ifndef COURSINSAGMMCPP_TRIANGLEEQUILATERAL_H
#define COURSINSAGMMCPP_TRIANGLEEQUILATERAL_H


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


#endif //COURSINSAGMMCPP_TRIANGLEEQUILATERAL_H
