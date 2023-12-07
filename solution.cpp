#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size() == 0) return 0;
    int i = 1;
    int j = 1;
    int n = nums.size();
    while (i<n)
    {
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }

    return j;
}

int main(int argc, char const *argv[])
{

    vector<int> nums = {};
    int result = removeDuplicates(nums);
    cout << result << endl;
    
    return 0;
}






// in leetcode:
//
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size() == 0 ) return 0;
//         int i = 1;
//         int j = 1;
//         int n = nums.size();

//         while(i < n){
//             cout << nums[i] << " and " << nums[i-1] << endl;
//             if(nums[i] != nums[i-1]){
//                 nums[j] = nums[i];
//                 j++;
//             }
//             i++;
//         }
        
//         return j;
//     }
// };
