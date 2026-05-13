#include "Dichotomy_class.h"
#include <cmath>
#include <limits>
#include <algorithm>

Dichotomy_class::Dichotomy_class() : a(0.0), b(0.0), eps(1e-6) {}
Dichotomy_class::~Dichotomy_class() {}

void Dichotomy_class::setA(double val) { a = val; }
void Dichotomy_class::setB(double val) { b = val; }
void Dichotomy_class::setEps(double val) { eps = val; }

double Dichotomy_class::getA() const { return a; }
double Dichotomy_class::getB() const { return b; }
double Dichotomy_class::getEps() const { return eps; }

bool Dichotomy_class::isNearlyZero(double val) const {
    return std::fabs(val) <= std::numeric_limits<double>::epsilon() * std::max(1.0, std::fabs(val)) * 32.0;
}

double Dichotomy_class::f(double x) const {
    return x - 1.0 / (3.0 - std::sin(3.6 * x));
}

int Dichotomy_class::solve(double &result) {
    double current_a = a;
    double current_b = b;
    
    double fa = f(current_a);
    double fb = f(current_b);
    if (isNearlyZero(fa)) { result = current_a; return 0; }
    if (isNearlyZero(fb)) { result = current_b; return 0; }
    if (fa * fb > 0) return 1;

    while ((current_b - current_a) > eps) {
        double c = (current_a + current_b) / 2.0;
        double fc = f(c);
        if (isNearlyZero(fc)) { result = c; return 0; }
        if (fa * fc < 0) current_b = c;
        else { current_a = c; fa = fc; }
    }
    result = (current_a + current_b) / 2.0;
    return 0;
}