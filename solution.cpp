#include "iostream"
#include "vector"
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;
    int check = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        check = target - numbers[i];
        for (int j = i+1; j < numbers.size(); j++)
        {
            if (numbers[j] == check) 
            {
                result.push_back(i+1);
                result.push_back(j+1);
            }
            
        }
        
    }
    return result;
    
}

int main(int argc, char const *argv[])
{
    vector<int>result;
    vector<int>nums = {-1,0};
    int target = -1;

    result = twoSum(nums,target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    
    
    return 0;
}


/*
- given 1-indexed array int is already sorted in ascending order.
- find 2 numbers that they add up to a number "target"

pseudocode:

int target
vector<int>nums

vector<int>result

int check = 0

for i from 0 to nums.size():
    check = target - nums[i]
    for j from 0 to nums.size():
        if nums[j] == check:
            result.push_back(i)
            result.push_back(j)


return result
*/