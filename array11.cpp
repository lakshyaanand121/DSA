#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class stocks
{
public:
    int profit(int prices[], int n)
    {

        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < n; i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            if (prices[i] - minPrice > maxProfit)
            {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};
int main()
{
    stocks s;
    int prices[] = {7, 6, 5, 3, 6, 4};
    int n = 6;
    int answer = s.profit(prices, n);
    cout << "maximum profit= " << answer << endl;
    return 0;
}