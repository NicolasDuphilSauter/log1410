#pragma once
#include "Fabrique.h"
#include "LeconFacile.h"
#include "LeconDifficle.h"
#include <memory>

//Une classe fabrique concrète du patron Abstract Factory
// permet de fabriquer un lecon de type nuance soit facile ou difficle
class FabriqueNuance: public Fabrique { 
private:
    std::string style = "Nuance";
public:
    std::unique_ptr<LeconFacile> fabriquerLeconFacile() const override {
        return std::make_unique<LeconFacileNuance>();
    }
    std::unique_ptr<LeconDifficle> fabriquerLeconDifficle() const override {
        return std::make_unique<LeconDifficleNuance>();
    }
    std::string getStyle() const override {return style;}
    
};