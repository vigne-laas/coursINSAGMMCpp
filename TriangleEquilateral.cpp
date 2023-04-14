#include <iostream>
#include "TriangleEquilateral.h"
TriangleEquilateral::TriangleEquilateral(float cote): Polygone(3),cote_(cote)
{
}
float TriangleEquilateral::perimetre()
{
    return 3*cote_;
}
void TriangleEquilateral::afficherCaracteristiques()
{
    Polygone::afficherCaracteristiques();
    std::cout << "\t - triangle equilateral de cotes : "<< cote_ << std::endl;
    std::cout << "\t - perimetre : " << perimetre() << std::endl;
}



