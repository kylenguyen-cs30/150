#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int k = 0;
    int i = 0;
    int n = nums.size();

    while (i < n)
    {
         if(nums[i] != val){
                std::swap(nums[i] , nums[k]);
                k++;
            }
            i++;
    }

    return k;
    
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3,2,2,3};
    int val = 3;

    int result = removeElement(nums, val);
    cout << result << endl;
    
    return 0;
}



/*
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int i = 0;
        int n = nums.size();

        while(i < n){

            if(nums[i] != val){
                std::swap(nums[i] , nums[k]);
                k++;
            }
            i++;
        }
        return k;
    }
};
*/