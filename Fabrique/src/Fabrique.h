#pragma once
#include "LeconFacile.h"
#include "LeconDifficle.h"
#include <memory>
#include <string>

//La classe Fabrique Abstraite du patron Abstract Factory

class Fabrique {
private:

public:
    Fabrique() = default;
    virtual std::unique_ptr<LeconFacile> fabriquerLeconFacile() const = 0;
    virtual std::unique_ptr<LeconDifficle> fabriquerLeconDifficle() const = 0;
    virtual std::string getStyle() const = 0;
    virtual ~Fabrique() = default;
};