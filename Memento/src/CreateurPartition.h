#pragma once

#include <string>
#include <iostream>
#include "Memento.h"
#include "MementoConcret.h"
#include <memory>


/**
 * Le créateurdeLecon détient une version   qui peut changer avec le temps. 
 * Il possede une méthode pour enregistrer la version dans un mémento 
 * et une autre méthode pour restaurer la version à partir de celui-ci.
 */
class CreateurPartition {
  
private:
    std::string Pversion; //version partition

public:
    CreateurPartition(std::string state) : Pversion(state) {
        std::cout << "Creation de la partition Version: " << Pversion << "\n";
    }


    /**
    * Enregistrer la version actuel dans un Memento.
    */
    std::unique_ptr<Memento> creerMemento() {
        return std::make_unique<MementoConcret>(Pversion);
    }

    /**
    * Restaure la version de la partition  à partir d'un objet mémento.
    */
    void restaurerPartition(Memento *memento) {
        Pversion = memento->version();
        std::cout << "La version de la partition est devenu: " << Pversion << "\n";
    }

    /**
    * Le client de créateurPartitioj devrait sauvegarder la version avant de lancer la méthode updaterPartition .
    */
    void updaterPartition(std::string modification) {
        std::cout << "modification effecutee sur la partition...\n";
        Pversion = modification;
        std::cout << "Mon etat est devenu: " << Pversion << "\n";
    }
};