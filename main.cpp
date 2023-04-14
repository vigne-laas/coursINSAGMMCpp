#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Carre.h"
#include "TriangleEquilateral.h"
#include "Cercle.h"

void q6()
{
    Figure * tab_figures[4];
    tab_figures[0] = new Rectangle(2,3);
    tab_figures[1] = new Carre(4);
    tab_figures[2] = new TriangleEquilateral(4);
    tab_figures[3] = new Cercle(5);
    for(auto fig : tab_figures)
        fig->afficherCaracteristiques();

    // for(auto i=0;i<4;i++)
    //     delete tab_figures[i];

}


int main()
{
   q6();

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
