// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/LeconFacile.h"
#include "../src/LeconDifficle.h"



TEST_CASE( "La methode imprimer() de la classe LeconFacile ", "[LeconFacile]" ) {
    LeconFacile leconFacile; 
    REQUIRE(leconFacile.imprimer() == "une lecon facile");
}

TEST_CASE( "La methode imprimer() de la classe leconDifficle ", "[leconDifficle]" ) {
    LeconDifficle leconDifficle; 
    REQUIRE(leconDifficle.imprimer() == "une lecon difficle");
}

TEST_CASE( "La methode imprimer() de la classe LeconFacileRythme ", "[LeconFacileRythme]" ) {
    LeconFacileRythme leconFacileRythme; 
    REQUIRE(leconFacileRythme.imprimer() == "une lecon facile de rythme");
}

TEST_CASE( "La methode imprimer() de la classe LeconDifficleRythme ", "[LeconDifficleNuance]" ) {
    LeconDifficleRythme leconDifficleRythme; 
    REQUIRE(leconDifficleRythme.imprimer() == "une lecon difficle de rythme");
}

TEST_CASE( "La methode imprimer() de la classe LeconFacileNuance ", "[LeconFacileNuance]" ) {
    LeconFacileNuance leconFacileNuance; 
    REQUIRE(leconFacileNuance.imprimer() == "une lecon facile de nuance");
}

TEST_CASE( "La methode imprimer() de la classe LeconDifficleNuance ", "[LeconDifficleNuance]" ) {
    LeconDifficleNuance leconDifficleNuance; 
    REQUIRE(leconDifficleNuance.imprimer() == "une lecon difficle de nuance");
}








