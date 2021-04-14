
// Source: https://refactoring.guru/fr/design-patterns/memento/cpp/example


#include "Memento.h"
#include "MementoConcret.h"
#include "SauvgarderPartition.h"

/**
 * Code venant des notes de cours qu'on a modifier pour que ca colle avec PolyPiano
 */

void client() {
  CreateurPartition createurP("Version initial");
  SauvgarderPartition sauvgarde(&createurP);
  sauvgarde.sauvegarder();
  createurP.updaterPartition("ajout de commentaire sur la partition");
  sauvgarde.afficherLhistorique();
  sauvgarde.restaurer();

}
int main() {
  std::srand(static_cast<unsigned int>(std::time(NULL)));
  client();
  return 0;
}