#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums){
    int maxReach = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i > maxReach)
        {
            return false;
        }
        maxReach = max(maxReach, i + nums[i]);
        if (maxReach >= (n-1))
        {
            return true;
        }
        
        
    }
    return false;
}

int main(int argc, char const *argv[])
{
    //Input: nums = [2,3,1,1,4]
    vector<int>nums = {2,3,1,1,4};
    bool result = canJump(nums);
    cout << result << endl;
    return 0;
}

/*
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int n = nums.size();

        for(int i = 0 ; i < n; i++){
            if(i > maxReach)
                return false;

            maxReach = max(maxReach , i+ nums[i]);

            if(maxReach >= (n - 1) )
                return true;
        }
        return false;      
    }
};
*/