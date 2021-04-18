#include "ChangerNom.h"
#include "ConvertisseurNumerique.h"
#include <memory>

//class FacadeConvertisseurPartition permettant de creer un objet ChangerNom et  convertisseurNumerique et ensuite changer le nom d une partition et convertir en note
class FacadeConvertisseurPartition{
    public:
    ~FacadeConvertisseurPartition()= default;
    void ConvertisseurPartition(std::string partition){
        std::unique_ptr<ChangerNom> changerNom = std::make_unique<ChangerNom>();
        std::unique_ptr<ConvertisseurNumerique> convertisseurNumerique = std::make_unique<ConvertisseurNumerique>();

        changerNom->rename(partition);
        convertisseurNumerique->transformerNote();
    }
};