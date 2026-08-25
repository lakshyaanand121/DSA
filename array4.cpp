// insertion
#include <iostream>
using namespace std;
int main()
{
    int i, n, a[10], loc, item;
    cout << "enter number of element in array:\n"
         << endl;
    cin >> n;
    cout << "enter the elements:\n"

         << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the location and the item to enter: \n"
         << endl;
    cin >> loc >> item;
    for (i = n - 1; i >= loc - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[loc - 1] = item;
    n = n + 1;
    cout << "after insertion" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
