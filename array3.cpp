//traversing
#include <iostream>
using namespace std;
int main()
{
    int i, n, a[10];
    cout << "no. of elements u want in an array: " << endl;
    cin >> n;
    cout << "enter the numbers: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the numbers are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}