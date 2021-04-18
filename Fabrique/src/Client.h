#pragma once
#include "LeconFacile.h"
#include "LeconDifficle.h"
#include "Fabrique.h"
#include <memory>

using namespace std;

//class client  permettant de fabriquer la lecon voulu 

class Client {
private:
    unique_ptr<const LeconFacile> m_LeconFacile = nullptr;  // le client peut avoir une leconfacile ou difficle
    unique_ptr< const LeconDifficle> m_LeconDifficle = nullptr;
    const Fabrique& m_fabrique;

public:
    Client(const Fabrique& fabrique): m_fabrique(fabrique) {    //dependament de la fabrique le client peut soit avoire une nuance ou un rythme
        m_LeconFacile = fabrique.fabriquerLeconFacile();
        m_LeconDifficle = fabrique.fabriquerLeconDifficle();
    }
    void imprimer() const { //affichage des types de lecon
        cout << "Dans une lecon de type  " << m_fabrique.getStyle() << " il y a: " << std::endl;
        cout << "    ";
        cout << m_LeconFacile->imprimer();
        cout << " et ";
        cout << m_LeconDifficle->imprimer();
        cout << std::endl;
    }

};