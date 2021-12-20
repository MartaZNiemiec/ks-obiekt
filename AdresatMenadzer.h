#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenadzer.h"

using namespace std;

class AdresatMenadzer
{
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    UzytkownikMenadzer uzytkownikMenadzer;

    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata);

public:
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int pobierzidOstatniegoAdresata();
    int dodajAdresata(int idOstatniegoAdresata);
};

#endif
