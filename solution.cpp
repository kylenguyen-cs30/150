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