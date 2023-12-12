#include "iostream"
#include "vector"
#include "string"

using namespace std;


int lengthOfLongestSubstring(string s){
    string temp = s;
    sort(temp.begin(), temp.end());
    cout<< temp << endl;
    
    return 0;

}

int main(int argc, char const *argv[])
{
    string s = "abcabcbcbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl;
    
    return 0;
}

/*

*/
