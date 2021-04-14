#pragma once

#include <string>


/**
 * L'interface Memento fournit un moyen de récupérer les donnee du memento,
 * comme la date de création ou le nom.
 */
class Memento {
public:
    virtual std::string getNom() const = 0;
    virtual std::string date() const = 0;
    virtual std::string version() const = 0;
    virtual ~Memento() = default;
};
