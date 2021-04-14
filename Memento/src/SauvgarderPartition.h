
#pragma once

#include <vector>
#include <iostream>
#include "Memento.h"
#include "CreateurPartition.h"
#include <memory>


/**
 * Le gardien (Caretaker) ne dépend pas de la classe MementoConcret. Par conséquent, 
 * il n'a pas accès à l'état du créateur, stocké dans le memento. 
 * Il communique avec tous les Mementos via l'interface de base Memento.
 */

class SauvgarderPartition {

private:
    std::vector<std::unique_ptr<Memento> > m_mementos;
    CreateurPartition* partiton;

public:
    SauvgarderPartition(CreateurPartition* createurP) : partiton(createurP) {
    }

    void sauvegarder() {
        std::cout << "Enregistrement de la version ...\n";
        m_mementos.push_back(this->partiton->creerMemento());
    }

    void restaurer() {
        if (m_mementos.size() == 0) {
            return;
        }
        std::unique_ptr<Memento> memento = std::move(m_mementos.back());
        m_mementos.pop_back();
        std::cout << "Restaurer la version a : " << memento->getNom() << "\n";
        partiton->restaurerPartition(memento.get());
    }

    void afficherLhistorique() const {
        std::cout << "Voici la liste des mementos:\n";
        for (auto& memento : m_mementos) {
            std::cout << memento->getNom() << "\n";
        }
    }
};