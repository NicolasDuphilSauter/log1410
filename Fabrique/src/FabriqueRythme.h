#pragma once
#include "Fabrique.h"
#include "LeconFacile.h"
#include "LeconDifficle.h"
#include <memory>
#include <string>

//Une classe fabrique concrète du patron Abstract Factory
// permet de fabriquer une lecon de type rythme soit facile ou difficle
class FabriqueRythme: public Fabrique {
private:
    std::string style = "Rythme";
public:

    std::unique_ptr<LeconFacile> fabriquerLeconFacile() const override {
        return std::make_unique<LeconFacileRythme>();
    }
    std::unique_ptr<LeconDifficle> fabriquerLeconDifficle() const override {
        return std::make_unique<LeconDifficleRythme>();
    }
    std::string getStyle() const override {return style;}
};