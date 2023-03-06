# szlifierka i wkretarko wiertarka
program w języku C++, który definiuje trzy klasy: podstawową klasę Urządzenie oraz dwie pochodne klasy SzlifierkaKatowa i WiertarkoWkretarka.

Klasa Urządzenie posiada pola firma i obroty oraz metody do zwracania tych wartości oraz wyświetlania opisu urządzenia. Klasa SzlifierkaKatowa i WiertarkoWkretarka dziedziczą po klasie Urządzenie i dodają własne pola oraz metody.

W funkcji main program tworzy trzy obiekty klasy SzlifierkaKatowa i trzy obiekty klasy WiertarkoWkretarka, a następnie wywołuje funkcje najwieksza_l_obrotow i najkrotszy_czas_ladow, które przyjmują odpowiednio wskaźnik do tablicy obiektów SzlifierkaKatowa i WiertarkoWkretarka oraz ich rozmiar i zwracają informacje o urządzeniach o największej liczbie obrotów i najkrótszym czasie ładowania.

Ważne elementy składniowe języka C++ zastosowane w kodzie to: dziedziczenie klas, konstruktor z parametrami, metody dostępowe (gettery) oraz funkcje przyjmujące wskaźniki do obiektów i ich rozmiar.
