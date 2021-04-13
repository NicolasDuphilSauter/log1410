#include <iostream>
#include "Lecon.h"
#include "Mail.h"
#include "Sms.h"



int main() {
    Lecon lecon;
    Sms sms;
    Mail mail;
    lecon.ajouterObservateur(&sms);
    lecon.ajouterObservateur(&mail);
    lecon.ajouterUneLecon();
    return 0;
}