#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami, string nazwaTymczasowegoPlikuZAdresatami)
    : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami),
    NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI(nazwaTymczasowegoPlikuZAdresatami)
    {
        adresatMenadzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenadzer;
        adresatMenadzer = NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
    int dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    int edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();

};

#endif
