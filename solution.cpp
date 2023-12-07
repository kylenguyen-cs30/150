#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> & prices ){
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for(int price: prices){
        if (price - minPrice > maxProfit)
        {
            maxProfit = price - minPrice;
        }

        if (price < minPrice)
        {
            minPrice = price;
        }
    }

    return maxProfit;
}

int main(int argc, char const *argv[])
{
    // Input: prices = [7,1,5,3,6,4]
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);
    cout << result << endl;
    return 0;
}




/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int price: prices){
            if(price - minPrice > maxProfit){
                maxProfit = price - minPrice;
            }
            if(price < minPrice){
                minPrice = price;
            }
        }
        
        return maxProfit;
        
    }
};
*/