
#include "Client.h"
#include "FabriqueNuance.h"
#include "FabriqueRythme.h"

using namespace std;

int main() {
   

    // Patron Fabrique - Style Art deco
    const FabriqueNuance fabriqueNuance;
    const Client clientA(fabriqueNuance);
    clientA.imprimer();

    // Patron Fabrique - Style vaisseau spatial
    const FabriqueRythme fabriqueRythme;
    const Client clientB(fabriqueRythme);
    clientB.imprimer();

    return 0;
}