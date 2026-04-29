#include "Dichotomy_class.h"
#include <cmath>
#include <limits>
#include <algorithm>

Dichotomy_class::Dichotomy_class() {}
Dichotomy_class::~Dichotomy_class() {}

bool Dichotomy_class::isNearlyZero(double val) const {
    return std::fabs(val) <= std::numeric_limits<double>::epsilon() * std::max(1.0, std::fabs(val)) * 32.0;
}

double Dichotomy_class::f(double x) const {
    return x - 1.0 / (3.0 - std::sin(3.6 * x));
}

int Dichotomy_class::solve(double a, double b, double eps, double &result) {
    double fa = f(a);
    double fb = f(b);
    if (isNearlyZero(fa)) { result = a; return 0; }
    if (isNearlyZero(fb)) { result = b; return 0; }
    if (fa * fb > 0) return 1;

    while ((b - a) > eps) {
        double c = (a + b) / 2.0;
        double fc = f(c);
        if (isNearlyZero(fc)) { result = c; return 0; }
        if (fa * fc < 0) b = c;
        else { a = c; fa = fc; }
    }
    result = (a + b) / 2.0;
    return 0;
}
