#include "iostream"
#include "vector"
#include "numeric"
using namespace std;


int minSubArrayLen(int target, vector<int>& nums){

}


int main(int argc, char const *argv[])
{
    
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
int right = nums.size() - 1


*/
