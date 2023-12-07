#include <iostream>
#include <vector>
using namespace std;


int majorityElement(vector<int>& nums){
    int candidate = nums[0];
    int count = 1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count += 1;
        }else if (nums[i] == candidate)
        {
            count += 1;
        }else{
            count -= 1;
        }
        
    }

    return candidate;
    

}

int main(int argc, char const *argv[])
{
    vector<int> v = {2,2,1,1,2,2};
    int result = majorityElement(v);
    cout << result << endl;
    
    
    return 0;
}




/*
in leetcode :
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        int n = nums.size();
        for(int i = 1; i < n ; i++){
            cout << count << endl;
            if(count == 0){
                cout << "condition one" << endl;
                candidate = nums[i];
                count = 1;
            }else if( nums[i] == candidate){
                cout << "condition two" << endl;
                count += 1;
            }else{
                cout << "condition three" << endl;
                count -= 1;
            }

        }


        return candidate;
    }
};
*/