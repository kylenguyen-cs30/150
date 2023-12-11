#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

using namespace std;


int lengthOfLongestSubstring(string s){
    
    for (int i = 0; i < s.length(); i++)
    {
        string temp = s.substr(i,i);
        cout << temp << endl;
    }
        
    return 0;

}

int main(int argc, char const *argv[])
{
    string s = "abcabcbcbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl;
    
    return 0;
}

