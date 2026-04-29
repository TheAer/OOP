#ifndef DICHOTOMY_CLASS_H
#define DICHOTOMY_CLASS_H

class Dichotomy_class {
private:
    bool isNearlyZero(double val) const;
    double f(double x) const;

public:
    Dichotomy_class();
    ~Dichotomy_class();
    int solve(double a, double b, double eps, double &result);
};

#endif
