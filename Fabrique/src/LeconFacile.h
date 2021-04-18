#pragma once
#include <iostream>

// definition de la class leconFAcile et de ses types de lecon
class LeconFacile {
private:

public:
    virtual std::string imprimer() const {  // imprimer la difficulte de la lecon
        return "une lecon facile";
    }
    virtual ~LeconFacile() = default;
};

class LeconFacileRythme: public LeconFacile {   // imprimer le type de lecon dans ce cas si rythme
private:

public:
    std::string imprimer() const override {
        return "une lecon facile de rythme";
    }
  
};

class LeconFacileNuance: public LeconFacile {// imprimer le type de lecon dans ce cas si nuance
private:

public:
    std::string imprimer() const override {
        return "une lecon facile de nuance";
    }
  
};