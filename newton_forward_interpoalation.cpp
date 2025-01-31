#include<iostream>

using namespace std;

double p_cal(double u, int n) {

    double temp = u;

    for (int i = 1; i < n; i++) {

    temp *= (u - i);
    }
    return temp;
}
double fact(int n) {

    double temp = 1;

    for (int i = 2; i <= n; i++) {

    temp *= i;
    }
    return temp;
}
int main() {

    int n = 4;

    int x[4] = {45, 50, 55, 60};

    double y[n][n] = {0};

    y[0][0] = 0.7071;

    y[1][0] = 0.7660;

    y[2][0] = 0.8192;

    y[3][0] = 0.8660;

    for (int i = 1; i < n; i++) {

     for (int j = 0; j < n - i; j++) {

      y[ j ][ i ] = y[ j + 1][i - 1] - y[ j ][i - 1];
        }
    }
    for (int i = 0; i < n; i++) {

        cout << x[i] << "\t";

        for (int j = 0; j < n - i; j++) {

        cout << y[i][j] << "\t";
        }
        cout << endl;
    }
    double x0 = 52;

    double sum = y[0][0];

    double h = x[1] - x[0];

    double p = (x0 - x[0]) / h;

    for (int i = 1; i < n; i++) {

    sum += (p_cal(p, i) * y[0][i]) / fact(i);
    }
    cout << endl << "Value at " << x0 << " = " << sum << endl;

    return 0;
}
/*
  45      0.7071  0.0589  -0.0057 -0.0007
 50      0.766   0.0532  -0.0064
 55      0.8192  0.0468
 60      0.866

Value at 52 = 0.788003

Process returned 0 (0x0)   execution time : 0.098 s
Press any key to continue.

*/
