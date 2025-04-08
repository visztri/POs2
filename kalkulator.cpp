#include <iostream>
#include <cmath>
#include "kalkulator.h"

double Kalkulator::dodawanie(double a, double b) {
    return a + b;
}

double Kalkulator::odejmowanie(double a, double b) {
    return a - b;
}

double Kalkulator::mnozenie(double a, double b) {
    return a * b;
}

double Kalkulator::dzielenie(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0! Zwracam stara liczbe." << std::endl;
        return a;
    }
    return a / b;
}

double Kalkulator::modulo(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0! Zwracam stara liczbe." << std::endl;
        return a;
    }
    return std::fmod(a, b);
}

void Kalkulator::menu() {

    std::cout << "Kalkulator" << std::endl;
    std::cout << "1) + (dodawanie)" << std::endl;
    std::cout << "2) - (odejmowanie)" << std::endl;
    std::cout << "3) * (mnożenie)" << std::endl;
    std::cout << "4) / (dzielenie)" << std::endl;
    std::cout << "5) % (modulo)" << std::endl;
    std::cout << "6) Wyczysc " << std::endl;
    std::cout << "7) Wyjscie" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    while (wybor != 7) {
        std::cout << "Wybierz operacje: ";
        std::cin >> wybor;

        if (wybor >= 1 && wybor <= 5) {
            std::cout << "Podaj liczbe: ";
            std::cin >> b;
        }

        switch (wybor) {
            case 1:
                a = dodawanie(a, b);
            std::cout << "Wynik: " << a << std::endl;
            break;
            case 2:
                a = odejmowanie(a, b);
            std::cout << "Wynik: " << a << std::endl;
            break;
            case 3:
                a = mnozenie(a, b);
            std::cout << "Wynik: " << a << std::endl;
            break;
            case 4:
                a = dzielenie(a, b);
            std::cout << "Wynik: " << a << std::endl;
            break;
            case 5:
                a = modulo(a, b);
            std::cout << "Wynik: " << a << std::endl;
            break;
            case 6:
                a = 0;
            std::cout << "Wyczyszczono, a = 0" << std::endl;
            break;
            case 7:
                std::cout << "Koniec programu" << std::endl;
            return;
            default:
                std::cout << "Niepoprawny wybor! Sprobuj ponownie." << std::endl;
            break;
        }
    }
}
