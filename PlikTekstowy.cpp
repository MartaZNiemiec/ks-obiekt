#include "PlikTekstowy.h"

string PlikTekstowy::pobierzNazwePliku()
{
    return NAZWA_PLIKU;
}

bool PlikTekstowy::czyPlikJestPusty()
{
    bool pusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);

        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() == 0)
            pusty = true;

        else pusty = false;

    plikTekstowy.close();

    return pusty;
}
