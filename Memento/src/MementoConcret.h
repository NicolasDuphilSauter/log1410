
#pragma once


#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include "Memento.h"

/**
 * Le Memento concret contient l'infrastructure de stockage de la version de la partiton
 */
class MementoConcret : public Memento {
private:
    std::string m_version;
    std::string m_date;

public:
    MementoConcret(std::string version) : m_version(version) {
        std::time_t maintenant = std::time(0);
        m_date = std::ctime(&maintenant);
        m_date.pop_back(); // retirer "/n"
    }

    /**
    * Le créateurLecon utilise cette méthode pour restaurer sa version
    */
    std::string version() const override {
        return m_version;
    }

    /**
    * Le reste des méthodes sont utilisées par Le sauvgardeur de partitoin pour afficher les donnee comme nom et date.
    */
    std::string getNom() const override {
        return m_date + " / (" + m_version + "...)";
    }

    std::string date() const override {
        return m_date;
    }

};