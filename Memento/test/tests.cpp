// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Memento.h"
#include "../src/MementoConcret.h"
#include "../src/SauvgarderPartition.h"
#include <string>


TEST_CASE( "Tests pour la classe CreateurPartition", "[Createur]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests creattion partition
    std::string expected = "Creation de la partition Version: Version initial\n";
    CreateurPartition createurP("Version initial");
    std::string text = buffer.str();
    REQUIRE(text == expected);

   
    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);
 
}

TEST_CASE( "Tests pour la classe SauvgarderPartition", "[Sauvgarder]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests sauvgarde partition
    std::string expected = "Creation de la partition Version: Version initial\nEnregistrement de la version ...\n";
    CreateurPartition createurP("Version initial");
    SauvgarderPartition sauvgarde(&createurP);
    sauvgarde.sauvegarder();
    std::string text = buffer.str();
    REQUIRE(text == expected);
    
    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);
 
}

TEST_CASE( "Tests pour la classe SauvgarderPartition update", "[Update]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests sauvgarde partition
    std::string expected = "Creation de la partition Version: Version initial\nEnregistrement de la version ...\nmodification effecutee sur la partition...\nMon etat est devenu: ajout de commentaire sur la partition\n";
    CreateurPartition createurP("Version initial");
    SauvgarderPartition sauvgarde(&createurP);
    sauvgarde.sauvegarder();
    createurP.updaterPartition("ajout de commentaire sur la partition");
    std::string text = buffer.str();
    REQUIRE(text == expected);
    
    std::cout.rdbuf(sbuf);
 
}

















