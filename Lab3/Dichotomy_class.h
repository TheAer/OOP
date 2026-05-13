#ifndef DICHOTOMY_CLASS_H
#define DICHOTOMY_CLASS_H

class Dichotomy_class {
private:
    double a;
    double b;
    double eps;
    
    bool isNearlyZero(double val) const;
    double f(double x) const;

public:
    Dichotomy_class();
    ~Dichotomy_class();

    void setA(double val);
    void setB(double val);
    void setEps(double val);

    double getA() const;
    double getB() const;
    double getEps() const;

    int solve(double &result);
};

#endif