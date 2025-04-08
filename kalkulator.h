#include <iostream>
#include "kalkulator.cpp"

class Kalkulator
{
public:
    int wybor;
    double a;
    double b;

    double dodawanie(double a, double b);
    double odejmowanie(double a, double b);
    double mnozenie(double a, double b);
    double dzielenie(double a, double b);
    double modulo(double a, double b);
    void menu();

};
