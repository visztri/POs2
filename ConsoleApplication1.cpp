#include <iostream>
#include <cmath>


double dodawanie(double a, double b) {
    return a + b;
}

double odejmowanie(double a, double b) {
    return a - b;
}

double mnozenie(double a, double b) {
    return a * b;
}

double dzielenie(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0! Zwracam stara liczbe." << std::endl;
        return a;
    }
    return a / b;
}

double modulo(double a, double b) {
    if (b == 0) {
        std::cout << "Nie mozna dzielic przez 0! Zwracam stara liczbe." << std::endl;
        return a;
    }
    return std::fmod(a, b);
}

void menu() {
    int wybor = 0;
    double a = 0;
    double b;

    std::cout << "Kalkulator" << std::endl;
    std::cout << "1) + (dodawanie)"<< std::endl;
    std::cout << "2) - (odejmowanie)"<< std::endl;
    std::cout << "3) * (mnożenie)"<< std::endl;
    std::cout << "4) / (dzielenie)"<< std::endl;
    std::cout << "5) % (modulo)"<< std::endl;
    std::cout << "6) Wyczysc (resetuje a do 0)"<< std::endl;
    std::cout << "7) Wyjscie"<< std::endl;

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
                std::cout << "Wyczyszczono, a = 0"<< std::endl;
                break;
            case 7:
                std::cout << "Koniec programu"<< std::endl;
                return;
            default:
                std::cout << "Niepoprawny wybor! Sprobuj ponownie." << std::endl;
                break;
        }
    }
}

int main() {
    menu();
    return 0;
}
