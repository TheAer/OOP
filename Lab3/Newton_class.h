#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

class Newton_class {
private:
    bool isNearlyZero(double val) const;
    double f(double x) const;
    double df(double x) const;

public:
    Newton_class();
    ~Newton_class();
    int solve(double x0, double eps, double &result);
};

#endif
