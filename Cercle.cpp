#include <iostream>
#include "Cercle.h"
Cercle::Cercle(float r):rayon_(r)
{

}
void Cercle::setRayon(float r)
{
   rayon_ = r;
}
void Cercle::displayRayon()
{
    std::cout << "Cercle de rayon : " << rayon_ << std::endl;
}
float Cercle::perimetre()
{
    return (float) 2.0*3.14*rayon_;
}
void Cercle::afficherCaracteristiques()
{
    std::cout << "Cercle de rayon : "<<rayon_ << std::endl;
    std::cout << "\t - perimetre : " << perimetre() << std::endl;

}
