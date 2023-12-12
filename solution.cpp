#include "iostream"
#include "vector"
#include "numeric"
using namespace std;


int minSubArrayLen(int target, vector<int>& nums){
    int min_len = nums.size() + 1;
    int sum = 0;
    int left = 0;
    int right = 0;


    while(right < nums.size()){
        sum += nums[right];
        while (sum >= target)
        {
            min_len = min(min_len, right - left + 1);
            sum -= nums[left];
            left++;
        }
        right++;
    }

    if(min_len == nums.size()+1){
        return 0;
    }else{
        return min_len;
    }

}
/*

*/


int main(int argc, char const *argv[])
{
    // input
    vector<int>nums = {1,4,4};
    int target = 4;
    int result = minSubArrayLen(target, nums);
    cout << result << endl;
    return 0;
}

/*
- an array of positve integers
- a positive integer target
- return the minimal length of a subarray
- sum of the sub array is greater or equal target
- if there is no subarray. return 0

pseudocode:

int target
vector<int>nums

base case 
int sum = 0
accumulate(nums.begin(),nums.end(), sum)

if sum < target:
    return 0

main case
sort(v.begin(), v.end())

int left = 0
int right = 0 

while(right != nums.size()){

}


*/
