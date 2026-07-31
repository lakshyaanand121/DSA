#include <iostream>
using namespace std;
int main()
{
    int i, j, matrix[3][3];
    int matrix_a;
    int matrix_b;
    cout << "enter 9 elements of matrix a :" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }
    cout << "matrix a" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "enter 9 elements of matrix b :" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cin >> matrix[i][j];
    }
    cout << "matrix b" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}