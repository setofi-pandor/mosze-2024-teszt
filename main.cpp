
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Hibás: N_ELEMENTS elnevezés helyett NELEMENTS lett, ami nem létezik.
    std::cout << '1-100 ertekek duplazasa';

    for (int i = 0;)  // Hibás: A for ciklusból hiányzik a feltétel meg az inkrementálás.
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++)  // Hibás: A ciklus feltétele minden alkalommal hamis lesz, mert az i kezdetben 0, ezért nem lép bele, így nem fut le a ciklus.
    {
        std::cout << "Ertek:";
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;

    for (int i = 0; i < N_ELEMENTS, i++)  // Hibás: Pontosvesszõt kellene használni sima vesszõ helyett a for feltételében.
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; // Lekezeletlen memóriaszivárgás
}
