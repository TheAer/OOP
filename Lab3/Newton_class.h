#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

class Newton_class {
private:
    double x0;
    double eps;
    
    bool isNearlyZero(double val) const;
    double f(double x) const;
    double df(double x) const;

public:
    Newton_class();
    ~Newton_class();

    void setX0(double val);
    void setEps(double val);

    double getX0() const;
    double getEps() const;

    int solve(double &result);
};

#endif