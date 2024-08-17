// best_time_to_buy_and_sell_stock.
#include <iostream>
#include <vector>
using namespace std;
class stock
{
public:
    int buyAndSell(vector<int> stock)
    {
        int buy = stock[0], maxProfit = 0;
        for (int i = 0; i < stock.size(); i++)
            if (buy > stock[i])
                buy = stock[i];
            else if (stock[i] - buy > maxProfit)
                maxProfit = stock[i] - buy;
        return maxProfit;
    }
};
int main()
{
    stock calculate_profit;
    vector<int> stock{7, 1, 5, 3, 6, 4};
    cout << calculate_profit.buyAndSell(stock) << endl;
    return 0;
}