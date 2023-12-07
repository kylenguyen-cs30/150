
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> result(m + n);
    int i = 0;
    int j = 0;
    int k = 0;

    

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            result[k] = nums1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = nums2[j];
            k++;
            j++;
        }
    }

    while (i < m)
    {
        result[k++] = nums1[i++];
    }

    while (j < n)
    {
        result[k++] = nums2[j++];
    }

    for (i = 0; i < m + n; i++)
    {
        nums1[i] = result[i];
    }

    cout << endl;
    for(int n : result){
        cout << n << " ";
    }



}



int main(int argc, char const *argv[])
{
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {2,5,6};
    int m = 3;
    int n = 3;
    merge(v1,m,v2,n);
    return 0;
}

    /*
    on leetcode:
    class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int> result(m + n);
            int i = 0;
            int j = 0;
            int k = 0;

            cout << "m: " << m << endl;
            cout << "n: " << n << endl;

            while(i < m && j < n){
                cout << i << " " << j << endl;
                if(nums1[i] < nums2[j]){
                    result[k] = nums1[i];
                    k++;
                    i++;
                }else{
                    result[k] = nums2[j];
                    k++;
                    j++;
                }
            }



            while(i < m){
                result[k++] = nums1[i++];
            }

            while(j < n){
                result[k++] = nums2[j++];

            }


            for(i = 0; i < m + n; i++){
                nums1[i] = result[i];
            }

        }
    };
    */