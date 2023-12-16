#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

using namespace std;


int lengthOfLongestSubstring(string s){
    
    int start= 0;
    int end = 0;
    int max = 0;

    unorder_map<char,int> charSet;

    while(end < s.size()){
        if(charSet.find(s[end]) != charSet.end()){
            // repeated char, update max
            max = max(max,end-start);
            // remove chars from set up to repeated char
            while(s[start] != s[end]){
                charSet.erase(s[start]);
                start++;
            }
            start++;
        }else{
            charSet.insert(s[end]);
            end++;
        }
    }

    return max;

}

int main(int argc, char const *argv[])
{
    string s = "abcabcbcbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl;
    
    return 0;
}

