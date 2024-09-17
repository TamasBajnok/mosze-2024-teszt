#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // eltér a szögletes zárójelben lévő változó neve
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa'
        // a for ciklus feltételéből hiányzik, az hogy meddig menjen, illetve hogy mekkora lépéközökkel
        for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // nincs pontos vessző a sor végén
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
