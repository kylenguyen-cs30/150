#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> threeSum(vector<int>&nums){


    
    
}

int main(int argc, char const *argv[])
{
    
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);
    
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}


/*
- given an array of nums 
- find 3 numbers that sastify these conditions:
    * they are all different indexes
    * their sum have to be zero
- no duplicate


[-4,-1,-1,0,1,2]


pseudocode

// base case : 

vector<int> nums
nums.sort()
vector<vector<int>> triplets;


for(int i = 0; i < nums.size() && nums[i] <= 0; ++i){
    if nums[i] == nums[i-1] && i > 0:
        continue

    int left = i+1;
    int right = nums.size() - 1;
    while(left < right){
        int sum nums[i] + nums[left] + nums[right]
        
        if sum == 0:
            triplets.push_back({nums[i] , nums[left] , nums[right]})
            left++
            right--

            // skip all duplicates
            while(left < right && nums[left] == nums[left-1]) left++
            while(left < right && nums[right] == nums[right+1]) right--
    }
}

*/
