#include "iostream"
#include <vector>
using namespace std;

int maxArea(vector<int> &height){
    int left = 0;
    int right = height.size()-1;
    int max_area = 0;

    while (left < right)
    {
        int area = min(height[left] , height[right]) * (right - left);
        if (area > max_area)
        {
            max_area = area;
        }
        if (height[left] <= height[right])
        {
            left++;
        }else
        {
            right--;
        }
        
        
        
    }
    return max_area;
    
}

int main(int argc, char const *argv[])
{
    vector<int> height = {1, 1};
    int result = maxArea(height);
    cout << result << endl;
    return 0;
}


/*
INTITUION:
- It is the same concept earlier programming challenge. So there are two pointer that 
is pointing to the first index and the other one point at the end of the vector. then 
they start going to middle of the area and calculate the area at the same time. this algorithm 
also compare the area to max_area so the max_area can be updated if the algorithm found bigger max_area
*/


/*
pseudocode: 
vector<int> height

int left = 0
int right = height.size()-1
int max_area = 0

while(left < right){
     int area = min(height[left], height[right]) * (right - left)
     if(area > max_area){
        max_area = area
     }
     if(height[left] <= height[right]){
        left++
     }else{
        right--
     }
}

return max_area
*/

/*
best time complexity: 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};
*/
