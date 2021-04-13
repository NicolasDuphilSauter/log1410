#pragma once


class Observateur {

    public:
        virtual void mettreAJour() = 0; //methode virtuel permettant a chaque observateur d etre notifier de la bonne facon
        virtual ~Observateur() = default;   //destructeur par default
};
