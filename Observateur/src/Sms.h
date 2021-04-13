#pragma once


#include <iostream>

#include "Observateur.h"


class Sms: public Observateur {
    public:
        void sonner() {     //facon d etre notifier
            std::cout << "drrrr...  drrrr... Sms recu \n";
        } 

        void  mettreAJour() override {  //notification lorsque l'observable est mis a jour
            sonner();
        }
};

