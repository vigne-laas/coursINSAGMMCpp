#include "Polygone.h"
#include <iostream>

Polygone::Polygone(int nb_cotes): Figure(),nb_cotes_(nb_cotes)
{
    
}

void Polygone::afficherCaracteristiques()
{
    std::cout << "Caracteristique d'un polygone  : nombre de coté : " << nb_cotes_ << std::endl;
}
