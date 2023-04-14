#include <iostream>
#include <string>


template <typename T>
class Animal: public T {

protected:
    int val;
    T espece;

public:
    Animal() {}
    void print() { std::cout << "Je suis un " << espece.quoi() << " et je pese en moyenne " << espece.poidsKgs() << "Kg" << std::endl; }
    std::string appartenir() { return std::string("J'appartiens aux animaux de la famille du ") + espece.quoi(); }
};


// remarquer que les methodes ci-dessous quoi/poidsKgs n'ont pas une signature identique

class Lapin {
public:
    std::string quoi() { return "lapin"; }
    float poidsKgs () { return 0.8; }
};

class Boeuf {
public:
    const char* quoi() { return "boeuf"; }
    int poidsKgs () { return 3000; }
};


int main(void) {
    Animal<Lapin> r;
    Animal<Boeuf> r2;

    // litteral value (L-value)
    r.print();
    r2.print();
    std::cout << r.appartenir() << std::endl;
    std::cout << r2.appartenir() << std::endl;
    std::cout << std::endl;

    // by reference (R-value)
    Animal<Lapin>& rr = r;
    Animal<Boeuf>& rr2 = r2;

    rr.print();
    rr2.print();
    std::cout << rr.appartenir() << std::endl;
    std::cout << rr2.appartenir() << std::endl;
    std::cout << std::endl;

    // by pointer
    Animal<Lapin>* rp = &r;
    Animal<Boeuf>* rp2 = &rr2;

    rp->print();
    rp2->print();
    std::cout << rp->appartenir() << std::endl;
    std::cout << rp2->appartenir() << std::endl;
    std::cout << std::endl;
}
