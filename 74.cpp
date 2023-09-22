//Name: MD Mofazzal Hosen
//Roll: 2007074
//Department: Computer Science and Engineering

#include <iostream>
#include <cmath>
using namespace std;

void gramSchmidt(double **Array, double **Q, double **R, int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < j; i++) {
            double dot_product = 0;
            for (int k = 0; k < n; k++) {
                dot_product += Q[k][i] * Array[k][j];
            }
            R[i][j] = dot_product;
            for (int k = 0; k < n; k++) {
                Array[k][j] -= Q[k][i] * R[i][j];
            }
        }
        double norm = 0;
        for (int k = 0; k < n; k++) {
            norm += Array[k][j] * Array[k][j];
        }
        norm = sqrt(norm);
        R[j][j] = norm;
        for (int k = 0; k < n; k++) {
            Q[k][j] = Array[k][j] / norm;
        }
    }
}

int main() {
    int n;
    cout << "Number of Vectors: ";
    cin >> n;

    double **Array = new double*[n];
    for (int i = 0; i < n; i++) {
        Array[i] = new double[n];
    }

    cout << "Enter the vectors:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Array[i][j];
        }
    }

    double **Q = new double*[n];
    double **R = new double*[n];
    for (int i = 0; i < n; i++) {
        Q[i] = new double[n];
        R[i] = new double[n];
    }

    gramSchmidt(Array, Q, R, n);

    cout << "Q:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << Q[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "R: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << R[i][j] << " ";
        }
        cout << "\n";
    }

    // Clean up memory
    for (int i = 0; i < n; i++) {
        delete[] Array[i];
        delete[] Q[i];
        delete[] R[i];
    }
    delete[] Array;
    delete[] Q;
    delete[] R;

    return 0;
}
