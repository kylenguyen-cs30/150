/*
in leet code: 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //base case
        if(nums.size() < 3) return nums.size();

        //set index
        int i = 2;
        int n = nums.size();
        //loop
        for(int j = 2; j < n;  j++){
            if(nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }

        return i;

    }
};
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
    // base case
    if(nums.size() < 3) return nums.size();

    //set index
    int i = 2;
    int n = nums.size();

    for (int j = 0; j < n; j++)
    {
        if (nums[j] != nums[i-2])
        {
            nums[i] = nums[j];
            j++;
        }
        
    }

    return i;
    
}


int main(int argc, char const *argv[])
{

    //nums = [1,1,1,2,2,3]
    vector<int> nums = {1,1,1,2,2,3};
    int result = removeDuplicates(nums);
    cout << result << endl;
    

    return 0;
}
