#include <iostream>
using namespace std;
int main()
{
    int i, n, a[10], loc, item;
    cout << "number of elements in array: \n";
    cin >> n;
    cout << "elements are: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter element location to delete: \n";
    cin >> loc;
    item = a[loc - 1];
    for (i = loc - 1; i < n - 1; i++)
    {

        a[i] = a[i + 1];
    }
    n = n - 1;

    cout << "array deletion:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}