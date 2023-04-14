#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(float longueur, float largeur): Polygone(4),longueur_(longueur),largeur_(largeur)
{

}

void Rectangle::setDimension(float longueur, float largeur)
{
    longueur_ = longueur;
    largeur_ = largeur;
}

void Rectangle::displayDimension()
{
    std::cout << "longueur : " << longueur_ << " largeur : " << largeur_ << std::endl;
}



float Rectangle::perimetre()
{
    return (2*largeur_)+(2*longueur_);
}
void Rectangle::afficherCaracteristiques()
{
    Polygone::afficherCaracteristiques();
    std::cout << "Caracteristique d'un rectangle : \n\t - longueur :" << longueur_ << "\n\t - largeur : " << largeur_<<std::endl;
}


