#ifndef POLYGONE_H
#define POLYGONE_H
#include "Figure.h"

class Polygone : public Figure
{
public:
    Polygone(int nb);
    void afficherCaracteristiques() override;
protected:
    int nb_cotes_;
};


#endif //VERSIONPERSO_POLYGONE_H
