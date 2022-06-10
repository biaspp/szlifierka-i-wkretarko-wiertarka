#include <iostream>
#include <string>
using namespace std;

class Urzadzenie // podstawowa
{

protected:
    string firma;
    int obroty;

public:
    // BRAK_KONSTRUKTORA DOMYSLNEGO NIE MA DOSTEPU DO DANYCH??????
    // juz jest
    Urzadzenie(string firma, int obroty)
    {
        this->firma = firma;
        this->obroty = obroty;
    }
    string daj_firme() { return firma; }
    int daj_obroty() { return obroty; }
    void pokaz_opis()
    {
        cout << "Opis urzadzenia:" << endl;
        cout << "Firma: " << firma << endl;
        cout << "Obroty: " << obroty;
    }
};
class SzlifierkaKatowa : public Urzadzenie // pochodna
{
private:
    int moc, tarcza;

public:
    SzlifierkaKatowa(string firma, int obroty, int moc, int tarcza) : Urzadzenie(firma, obroty)
    {
        this->firma = firma;
        this->obroty = obroty;
        this->moc = moc;
        this->tarcza = tarcza;
    }
    int daj_moc() { return moc; }
    int daj_tarcze() { return tarcza; }
    void pokaz_opis()
    {
        cout << "Opis urzadzenia:" << endl;
        cout << "Firma: " << firma << endl;
        cout << "Obroty: " << obroty << endl;
        cout << "Moc: " << moc << endl;
        cout << "Tarcza: " << tarcza << endl;
    }
};

class WiertarkoWkretarka : public Urzadzenie // pochodna
{
private:
    double napiecie;
    string bateria;
    int czas_ladow;

public:
    WiertarkoWkretarka(string firma, int obroty, double napiecie, string bateria, int czas_ladow) : Urzadzenie(firma, obroty)
    {
        this->firma = firma;
        this->obroty = obroty;
        this->napiecie = napiecie;
        this->bateria = bateria;
        this->czas_ladow = czas_ladow;
    }
    double daj_napiecie() { return napiecie; }
    string daj_baterie() { return bateria; }
    int daj_czas_ladow() { return czas_ladow; }
    void pokaz_opis()
    {
        cout << "Opis urzadzenia:" << endl;
        cout << "Firma: " << firma << endl;
        cout << "Obroty: " << obroty << endl;
        cout << "Napiecie: " << napiecie << endl;
        cout << "Bateria: " << bateria << endl;
        cout << "Czas ładowania: " << czas_ladow;
    }
};
void najwieksza_l_obrotow(SzlifierkaKatowa *s, int n)
{
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].daj_obroty() > s[y].daj_obroty())
        {
            y = i;
        }
    }
    cout << "Info o szlifiarce o najwiekszej liczbie obrotow: " << endl;
    s[y].pokaz_opis();
}

void najkrotszy_czas_ladow(WiertarkoWkretarka *w, int n)
{
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        if (w[i].daj_czas_ladow() < w[x].daj_czas_ladow())
        {
            x = i;
        }
    }
    cout << "Info o najszybciej ladujacej sie wiertarce: " << endl;
    w[x].pokaz_opis();
    cout << endl;
}

int main()
{
    SzlifierkaKatowa sztab[3] = {{"Firma1", 1, 2, 3},
                                 {"Firma2", 2, 3, 4},
                                 {"Firma3", 3, 4, 5}};
    WiertarkoWkretarka wtab[3] = {{"Firma1", 1, 2, "Typ1", 3}, {"Firma2", 2, 3, "Typ2", 4}, {"Firma3", 3, 4, "Typ3", 5}};
    najwieksza_l_obrotow(sztab, 3);
    najkrotszy_czas_ladow(wtab, 3);
}