#include <iostream>
#include <iomanip>

using namespace std;

#define N 10

void luDecomposition(double arra[N][N], int n) {

    double L[N][N] = {0}, U[N][N] = {0};

    for (int i = 0; i < n; i++) {

    for (int k = i; k < n; k++) {

    double sum = 0;

    for (int j = 0; j < i; j++)

    sum += L[i][j] * U[j][k];

    U[i][k] = arra[i][k] - sum;

    }
    for (int k = i; k < n; k++) {

    if (i == k)

    L[i][i] = 1;

    else {

    double sum = 0;

    for (int j = 0; j < i; j++)

    sum += L[k][j] * U[j][i];

    if (U[i][i] == 0) {

    cout << " LU decomposition cannot proceed.\n";

    return;
    }

    L[k][i] = (arra[k][i] - sum) / U[i][i];
            }
        }
    }
    cout << "\nLower Triangular Matrix (L):\n";

    for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++)

    cout << setw(8) << L[i][j] << " ";

    cout << endl;
    }
    cout << "\nUpper Triangular Matrix (U):\n";

    for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++)

    cout << setw(8) << U[i][j] << " ";

    cout << endl;
    }
}
int main() {

    int n;cin >> n;

    double arra[N][N];

    for (int i = 0; i < n; i++)

    for (int j = 0; j < n; j++)

    cin >> arra[i][j];

    luDecomposition(arra, n);

    return 0;
}
   /*
 3
1 2 3
4 5 6
7 8 9

Lower Triangular Matrix (L):
       1        0        0
       4        1        0
       7        2        1

Upper Triangular Matrix (U):
       1        2        3
       0       -3       -6
       0        0        0

Process returned 0 (0x0)   execution time : 7.711 s
Press any key to continue.
*/
