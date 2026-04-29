#include "LabRunner.h"
#include "Dichotomy_class.h"
#include "Newton_class.h"
#include <iostream>
#include <iomanip>

void runLab3() {
    double a, b, eps;
    
    std::cout << "=== Лабораторна робота No3 (Варіант 3) ===\n";
    std::cout << "Функція: f(x) = x - 1/(3 - sin(3.6x))\n\n";
    
    std::cout << "Введіть початок відрізка a: ";
    std::cin >> a;
    std::cout << "Введіть кінець відрізка b: ";
    std::cin >> b;
    std::cout << "Введіть точність eps: ";
    std::cin >> eps;

    if (a > b) std::swap(a, b);

    double result;
    std::cout << std::fixed << std::setprecision(10) << "\nРезультати:\n";

    Dichotomy_class *dyh = new Dichotomy_class();
    if (dyh->solve(a, b, eps, result) == 0) {
        std::cout << "Метод дихотомії: x = " << result << std::endl;
    } else {
        std::cout << "Метод дихотомії: корінь не знайдено на цьому проміжку." << std::endl;
    }
    delete dyh;

    Newton_class *nwt = new Newton_class();
    if (nwt->solve(b, eps, result) == 0) {
        std::cout << "Метод Ньютона:   x = " << result << std::endl;
    } else {
        std::cout << "Метод Ньютона: помилка обчислення (можливо, похідна 0)." << std::endl;
    }
    delete nwt;
}
