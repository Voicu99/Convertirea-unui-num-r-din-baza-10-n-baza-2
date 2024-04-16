// Convertirea unui număr din baza 10 în baza 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string convertToBinary(int numar) {
    if (numar == 0) {
        return "0";
    }

    std::string rezultat = "";

    while (numar > 0) {
        int bit = numar % 2;
        rezultat = std::to_string(bit) + rezultat;
        numar /= 2;
    }

    return rezultat;
}

int main() {
    int numar;

    // Citim numărul din baza 10 de la utilizator
    std::cout << "Introduceti un numar in baza 10: ";
    std::cin >> numar;

    // Converitm numărul în baza 2
    std::string rezultat = convertToBinary(numar);

    // Afișăm rezultatul
    std::cout << "Numarul " << numar << " in baza 2 este: " << rezultat << std::endl;

    return 0;
}