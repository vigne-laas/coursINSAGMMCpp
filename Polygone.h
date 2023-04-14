#ifndef COURSINSAGMMCPP_POLYGONE_H
#define COURSINSAGMMCPP_POLYGONE_H
#include "Figure.h"

class Polygone : public Figure
{
public:
    Polygone(int nb);
    void afficherCaracteristiques() override;
protected:
    int nb_cotes_;
};


#endif //COURSINSAGMMCPP_POLYGONE_H
