#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices){
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i-1])
        {
            maxProfit += (prices[i] - prices[i-1]);
        }
    }
        return maxProfit;
    
}



int main(int argc, char const *argv[])
{
    // Input: prices = [7,1,5,3,6,4]

    vector<int> prices = {1,2,3,4,5};
    int result = max
    return 0;
}



/*
leetcode :
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i = 1; i < prices.size() ; i++){
            if( prices[i] > prices[i - 1]) 
                maxProfit += (prices[i] - prices[i-1]);
        }
        return maxProfit;
        
    }
};
*/