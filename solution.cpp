#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        std::swap(nums[start] , nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k %= n;
    reverse(nums, 0, n-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, n-1);
}

int main(int argc, char const *argv[])
{

    // Input: nums = [1,2,3,4,5,6,7], k = 3
    vector<int> v1 = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(v1, k);

    for(int n : v1){
        cout << n << endl;
    }
    
    return 0;
}



/*
in leetcode:

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        cout << "K : " << k << endl;
        reverse(nums, 0 , n - 1);
        reverse(nums, 0 , k - 1);
        reverse(nums, k , n - 1);

    }

    void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            std::swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }


};

*/