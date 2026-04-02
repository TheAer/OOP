#include "rounding.h"
#include <iostream>

using namespace std;

void round(cina &first) {
    if (first.cop % 10 <= 3) {
        first.cop = first.cop - (first.cop % 10);
    }
    
    else {
        first.cop = first.cop - first.cop % 10 + 10 ;
    }

    if (first.cop >= 100) {
        first.grn = first.grn + (first.cop / 100);
        first.cop = first.cop % 100;
    }
}
void add(cina &first, cina &second, cina &result) {
    result.grn = first.grn + second.grn;
    result.cop = first.cop + second.cop;

    if (result.cop >= 100) {
        result.grn = result.grn + (result.cop / 100);
        result.cop = result.cop % 100;
    }
}

void read(cina &sum_c) {
    FILE *file;

    file = fopen("./price.txt", "r");

    if (file == nullptr) {
        cout << "Failed to open file" << endl;
        return;
    }
    int temp_grn, temp_cop, temp_n;
    while (fscanf(file, "%*s %d %hd %d", &temp_grn, &temp_cop, &temp_n) == 3) {
        if (temp_grn < 0 || temp_cop < 0 || temp_n < 0) {
            cout << "The numbers can't be negative" << endl;
            continue;
        }
        cina c = {0, 0};
        c.grn = temp_grn;
        c.cop = temp_cop;

        multiply(c, temp_n);

        add(c, sum_c, sum_c);
    }
    fclose(file);
}

void multiply(cina &first, int n) {
    first.grn = first.grn * n;
    first.cop = first.cop * n;

    if (first.cop >= 100) {
        first.grn = first.grn + first.cop / 100;
        first.cop = first.cop % 100;
    }
}

void show(cina c) {
    cout << c.grn << " Hrn " << c.cop << " Kop."<< endl;
}

void results() {
    cina sum_c = {0, 0};
    read(sum_c);
    cout << "Total amount: ";
    show(sum_c);
    cout << endl;

    cina r_sum = sum_c;
    round(r_sum);
    cout << "Amount to pay: ";
    show(r_sum);
    cout << endl;
}