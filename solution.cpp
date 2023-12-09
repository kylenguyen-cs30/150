#include "iostream"
#include "vector"
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right)       
    {
        int sum = numbers[left] + numbers[right];
        
        if (sum == target)  
        {
            return {left+1, right+1}; // return it as array format
        }else if (sum < target)
        {
            left++;
        }else{
            right--;
        }
    }
    return {};
    
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
- so this is one of the classic two pointer approach. the way of this 
program works is having one pointer which point at the first index of 
the vector and one pointer point at the end of the vector. both of these 
pointers will slowly go to the middle of the vector so there will be 2 nested 
loops in the vector. 

- if the sum of both value at two pointers equal to the target number, program will 
safely return it. otherwise, loop will increment left and right pointer correspondingly.

*/

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