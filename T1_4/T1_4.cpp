
#include <iostream>

using namespace std;

int main()
{
    
    int i, j;
    int c = 0;
    cin >> i;
    cin >> j;
    int **A = new int*[i];
    int **B= new int* [i];

    for (int a = 0; a < i; a++) {
        A[a]= new int[j];
        B[a] = new int[j];
    }
    for (int a = 0; a < i; a++) {
        for (int u = 0; u < j; u++) {
            cin>> A[a][u];
            B[a][u] = 0;
        }
    }

    cout << "Matrix A:" << endl;
    for (int a = 0; a < i; a++) {
        for (int u = 0; u <= j; u++) {
            
            if (u == j) {
                cout << endl;
                continue;
            }

            cout << A[a][u] << " ";
        }
    }

   for (int a = 0; a < i; a++) {
       
        for (int u = 0; u <= j; u++) {

            if (A[a][u] != 0) {
                B[a][u+c]= A[a][u];
            }
            else c--;
                
            
        }
        for (; c < 0; ) {
            B[a][j + c] = 0;
            c++;
        }
    }
    
    cout << "Matrix B:" << endl;
    for (int a = 0; a < i; a++) {
        for (int u = 0; u <= j; u++) {

            if (u == j) {
                cout << endl;
                continue;
            }

            cout << B[a][u] << " ";
        }
    }

}

