#pragma once


#include <iostream>

#include "Observateur.h"

class Mail: public Observateur {
    public:
        void receptionMail() {  //facon d etre notifier
            std::cout << "bip bip, mail recu \n";
        }

        void mettreAJour() override {   //notification lorsque l'observable est mis a jour
            receptionMail();
        }
};

