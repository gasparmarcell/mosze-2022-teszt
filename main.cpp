#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];  
    std::cout << '1-100 ertekek duplazasa' // aposztróf helyett idézőjel + pontosvessző
    for (int i = 0;) // helytelen for ciklus + felesleges for ciklus egybe lehet építeni
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) 
    {
        std::cout << "Ertek:" //az "Ertek" után nem ír ki számokat
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // atlag kezdőérték hiányzik + átlag számításnál elönyösebb double-t használni
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // pontosvessző hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
