#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> threeSum(vector<int>&nums){
    //base case
    bool is_zero = false;
    if (nums.size() == 3)
    {
        for(int num: nums){
            if (num == 0)
            {
                is_zero = true;
            }
            
        }
        if (is_zero)
        {
            return [];
        }else{
            return nums;
        }
        
    }

    //main case
    
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




*/
