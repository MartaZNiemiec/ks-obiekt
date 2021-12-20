#include "AdresatMenadzer.h"

int AdresatMenadzer::pobierzidOstatniegoAdresata()
{
    return idOstatniegoAdresata;
}

int AdresatMenadzer::dodajAdresata(int idOstatniegoAdresata)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idOstatniegoAdresata);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata(int idOstatniegoAdresata)
{
    Adresat adresat;

    int id, idZalogowanegoUzytkownika, idUzytkownika;
    string imie, nazwisko, nrTelefonu, email, adres;

    id = ++idOstatniegoAdresata;
    adresat.ustawId(id);

    idZalogowanegoUzytkownika = uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
    idUzytkownika = idZalogowanegoUzytkownika;
    adresat.ustawIdUzytkownika(idUzytkownika);

    cout << "Podaj imie: ";
    imie = plikZAdresatami.wczytajLinie();
    imie = plikZAdresatami.zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = plikZAdresatami.wczytajLinie();
    nazwisko = plikZAdresatami.zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    nrTelefonu = plikZAdresatami.wczytajLinie();
    adresat.ustawNrTelefonu(nrTelefonu);

    cout << "Podaj email: ";
    email = plikZAdresatami.wczytajLinie();
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    adres = plikZAdresatami.wczytajLinie();
    adresat.ustawAdres(adres);

    return adresat;
}



