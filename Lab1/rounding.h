#ifndef ROUNDING
#define ROUNDING

struct cina {
    int grn;
    short int cop;
};
void round(cina &first);
void add(cina &first, cina &second, cina &result);
void multiply(cina &first, int n);
void read(cina &sum_c);
void show(cina c);
void results();

#endif