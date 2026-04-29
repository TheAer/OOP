#include "Newton_class.h"
#include <cmath>
#include <limits>
#include <algorithm>

Newton_class::Newton_class() {}
Newton_class::~Newton_class() {}

bool Newton_class::isNearlyZero(double val) const {
    return std::fabs(val) <= std::numeric_limits<double>::epsilon() * std::max(1.0, std::fabs(val)) * 32.0;
}

double Newton_class::f(double x) const {
    return x - 1.0 / (3.0 - std::sin(3.6 * x));
}

double Newton_class::df(double x) const {
    double h = 1e-7;
    return (f(x + h) - f(x)) / h;
}

int Newton_class::solve(double x0, double eps, double &result) {
    double x_curr = x0;
    for (int i = 0; i < 1000; i++) {
        double fx = f(x_curr);
        if (isNearlyZero(fx)) { result = x_curr; return 0; }
        double dfx = df(x_curr);
        if (isNearlyZero(dfx)) return 1;
        double x_next = x_curr - fx / dfx;
        if (std::fabs(x_next - x_curr) < eps) { result = x_next; return 0; }
        x_curr = x_next;
    }
    return 2;
}
