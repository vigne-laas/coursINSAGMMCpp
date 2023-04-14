#ifndef VERSIONPERSO_FIGURE_H
#define VERSIONPERSO_FIGURE_H

class Figure
{
public:
    Figure(){};
    virtual float perimetre() = 0;
    virtual void afficherCaracteristiques() = 0;
    virtual ~Figure(){};

};

#endif //VERSIONPERSO_FIGURE_H
