// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Lecon.h"
#include "../src/Mail.h"
#include "../src/Sms.h"
#include <string>

// test inspirer de ceux donner en cours.

TEST_CASE( "Tests pour la classe Lecon", "[Lecon]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests
    std::string expected = "Lecon ajoutee !\n";
    Lecon lecon;
    lecon.ajouterUneLecon();
    std::string text = buffer.str();
    REQUIRE(text == expected);

    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);
}
TEST_CASE( "Tests pour la classe Mail", "[mail]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests
    std::string expected = "Lecon ajoutee !\nbip bip, mail recu \n";
    Lecon lecon;
    Mail mail;
    lecon.ajouterObservateur(&mail);
    lecon.ajouterUneLecon();
    std::string text = buffer.str();
    REQUIRE(text == expected);

    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);

}




TEST_CASE( "Tests pour la classe Sms", "[sms]" ) {

    // Redirect cout to our stringstream 
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests
    std::string expected = "Lecon ajoutee !\ndrrrr...  drrrr... Sms recu \n";
    Lecon lecon;
    Sms sms;
    lecon.ajouterObservateur(&sms);
    lecon.ajouterUneLecon();
    std::string text = buffer.str();
    REQUIRE(text == expected);

    // When done redirect cout to its old self
    std::cout.rdbuf(sbuf);

}












