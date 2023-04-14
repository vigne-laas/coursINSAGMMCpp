#include <iostream>
#include "Carre.h"
Carre::Carre(float cote) : Rectangle(cote,cote),cote_(cote)
{

}
void Carre::afficherCaracteristiques()
{
    Rectangle::afficherCaracteristiques();
    std::cout << "c'est un carré " << std::endl;
}
