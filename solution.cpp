#include "iostream"
#include "string"
#include "vector"
using namespace std;

bool isSubsequence(string s, string t) {
        //base case
        if (s.length() > t.length())        
        {
            return false;
        }

        //main case

        int sIndex = 0;
        int tIndex = 0;

        while (sIndex < s.length() && tIndex < t.length())      
        {
            if (s[sIndex] == t[tIndex])
            {
                sIndex++;
            }
            tIndex++;
            
        }

        return sIndex == s.length();
        
}



int main()
{
    string s = "abc";
    string t = "ahbgdc";
    bool result = isSubsequence(s,t); // should return 1
    cout << result << endl;


    string s1 = "axc";
    string t1 = "ahbgdc";
    bool result1 = isSubsequence(s1,t1); // should return 0
    cout << result1 << endl;

    return 0;
}

/*
INTITUION:

- this program works in a way like bus stop. if someone missed the bus of that day, that 
person will never get a bus entire day. Futhermore, this program not only check if all characters 
in s string is in t string but also it checks if the character is in the same order of t string as well
by using analogy of missing the bus. 

- time complexity: since there are two inputs for this challenge and we have to iterate both them as well. we have 
a loop to iterate both of them at O(n+m) where n is the lenghth of s string and m is the length of t string. 

*/

/*
- given two string
- check if string s is subsequence of string t
- string s have to be same order with string t
- return true if it is otherwise false
pseudocode:

bool isSubsequence(string s, string t) {
    // base case
    if (s.length() > t.length()) {
        return false;
    }

    int sIndex = 0, tIndex = 0;
    
    while (sIndex < s.length() && tIndex < t.length()) {
        if (s[sIndex] == t[tIndex]) {
            sIndex++;
        }
        tIndex++;
    }

    return sIndex == s.length();
}

*/


