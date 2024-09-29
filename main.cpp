
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Hib�s: N_ELEMENTS elnevez�s helyett NELEMENTS lett, ami nem l�tezik.
    std::cout << '1-100 ertekek duplazasa';

    for (int i = 0;)  // Hib�s: A for ciklusb�l hi�nyzik a felt�tel meg az inkrement�l�s.
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++)  // Hib�s: A ciklus felt�tele minden alkalommal hamis lesz, mert az i kezdetben 0, ez�rt nem l�p bele, �gy nem fut le a ciklus.
    {
        std::cout << "Ertek:";
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;

    for (int i = 0; i < N_ELEMENTS, i++)  // Hib�s: Pontosvessz�t kellene haszn�lni sima vessz� helyett a for felt�tel�ben.
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; // Lekezeletlen mem�riasziv�rg�s
}
