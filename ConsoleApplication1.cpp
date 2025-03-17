
#include <iostream>


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
        std::cout << Nie mozna dzielic przez 0!;
        return a;
    }
    return a / b;
}

double modulo(double a, double b) {
    if (b == 0) {
        std::cout << Nie mozna dzielic przez 0!;
        return a;
    }
    return a%b;
}

void menu() {
    int wybor;
    double a = 0;
    double b;
    std::cout << "1) +" << std::endl;
    std::cout << "2) -" << std::endl;
    std::cout << "3) *" << std::endl;
    std::cout << "4) /" << std::endl;
    std::cout << "5) %" << std::endl;
    std::cout << "6) wyczysc " << std::endl;
    std::cout << "7) wyjscie " << std::endl;
    
 
    while(wybor!=7){
       std::cin >> wybor;
       std::cin >> b;
    switch (wybor) {
       
    case 1:
        std::cout << dodawanie(a, b);
        a = dodawanie(a, b);
        break;
    case 2:
        std::cout << odejmowanie(a, b);
        a = odejmowanie(a, b);
        break;
    case 3:
        std::cout << mnozenie(a, b);
        a = mnozenie(a, b);
        break;
    case 4:
        std::cout << dzielenie(a, b);
        a = dzielenie(a, b);
        break;
    case 5:
        std::cout << modulo(a, b);
        a = modulo(a, b);
        break;
    case 6:
        a = 0;
        break;
    case 7:
        exit;
        break;

    }
}


int main()
{
    menu();
}
