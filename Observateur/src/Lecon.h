#ifndef SOLEIL_H_
#define SOLEIL_H_


#include <iostream>
#include "Observable.h"


class Lecon: public Observable {
    public:
        void ajouterUneLecon() { 
            std::cout << "Lecon ajoutee !\n";
            notifier();
        } 
};



#endif /* SOLEIL_H_ */