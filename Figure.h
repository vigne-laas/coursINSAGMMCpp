#ifndef COURSINSAGMMCPP_FIGURE_H
#define COURSINSAGMMCPP_FIGURE_H

class Figure
{
public:
    Figure(){};
    virtual float perimetre() = 0;
    virtual void afficherCaracteristiques() = 0;
    virtual ~Figure(){};

};

#endif //COURSINSAGMMCPP_FIGURE_H
