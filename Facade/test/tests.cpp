// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "../src/FacadeConvertisseurpartition.h"


TEST_CASE( "La methode rename() de la classe CChangerNom", "[ChangerNom]" ) {
    ChangerNom changernom; 
    
    REQUIRE(changernom.rename("partition") == "partition.XML");
}
TEST_CASE( "Tests pour la classe ConvertisseurNumerique et la methode transformerNote", "[ConvertisseurNumerique]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests creattion partition
    std::string expected = "Note transformer ... !\n";
    ConvertisseurNumerique convertisseur;
    convertisseur.transformerNote();
    std::string text = buffer.str();
    REQUIRE(text == expected);

   
    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);
 
}

TEST_CASE( "Tests pour la classe FacadeConvertisseurPartition et la methode ConvertisseurPartition", "[FacadeConvertisseurPartition]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests creattion partition
    std::string expected = "Le nom est maintenant partition.XML\nNote transformer ... !\n";
    FacadeConvertisseurPartition convertisseurPartition;
    convertisseurPartition.ConvertisseurPartition("partition");
    std::string text = buffer.str();
    REQUIRE(text == expected);

   
    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);
 
}








