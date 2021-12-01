#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    //int idOstatniegoAdresata;
    //int idUsunietegoAdresata;

    UzytkownikMenadzer uzytkownikMenadzer;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};

#endif
