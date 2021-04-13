#pragma once

#include <list>
#include "Observateur.h"

class Observable {
    std::list<Observateur*> observateurs;   //liste des observateur

    public:
        void ajouterObservateur(Observateur* c) { observateurs.push_back(c); } //ajouter un observateur a la liste des observateurs.
        void effacerObservateur(Observateur* c) { observateurs.remove(c); }    //retirer un observateur de la liste des observateurs.
        void notifier() { for (auto&o : observateurs) o->mettreAJour();} // permet de notifier tout les observateurs en parcourant la liste.
        virtual ~Observable() = default; //destructeur
};
 



