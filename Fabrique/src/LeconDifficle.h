#pragma once
#include <iostream>

// definition de la class leconDifficle et de ses types de lecon
class LeconDifficle {
private:

public:
    virtual std::string imprimer() const {  // imprimer la difficulte de la lecon
        return "une lecon difficle";
    }
    virtual ~LeconDifficle() = default;
};

class LeconDifficleRythme: public LeconDifficle {
private:

public:
    std::string imprimer() const override { // imprimer le type de lecon dans ce cas si rythme
        return "une lecon difficle de rythme";
    }
  
};

class LeconDifficleNuance: public LeconDifficle {
private:

public:
    std::string imprimer() const override { // imprimer le type de lecon dans ce cas si nuance
        return "une lecon difficle de nuance";
    }
  
};