#include <iostream>
using namespace std;
int main()
{
    int i, j, matrix[3][3], sum = 0;
    int matrix_a[3][3];
    int matrix_b[3][3];
    int matrix_c[3][3];
    cout << "enter 9 elements of matrix a :" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> matrix_a[i][j];
    }
    cout << "matrix a" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix_a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "enter 9 elements of matrix b :" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> matrix_b[i][j];
    }
    cout << "matrix b" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix_b[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
    cout << "sum of matrices is :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix_c[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}