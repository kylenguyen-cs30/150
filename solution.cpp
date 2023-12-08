#include "iostream"
#include "vector"
using namespace std;


bool isPalindrome(string s){
    // base case: 
    if(s.empty()) return true;

    // main case:
    string temp_str = ""; // initialize temp_str
    int n = s.length();

    for(char c: s){
       if (isalnum(c))
       {
            temp_str += tolower(c);
       }
        
    }


    int index1 = 0;
    int index2 = temp_str.length() - 1;
    while(index1 <= index2){
        if (temp_str.at(index1) != temp_str.at(index2))
        {
            cout << "checkpoint 1 \n";
            return false;
        }
        index1++;
        index2--;
    }
    
    return true;

    
}


int main(int argc, char const *argv[])
{
    // Input s ="A man, a plan, a canal: Panama"
    // output : true
    string s  = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(s);
    cout << result << endl;

    return 0;
}


/*
- given a phrase or string

pseudocode:
string s
// base case
if(s.empty()) return true;

// second case

string temp_str = "";
int n = s.lengh()

for i from 0 to s.length():
    char c = s.at(i)
    if c == ' '
        continue
    else if isUpper(c):
        c = tolower(c)
        temp_str += c
    else:
        temp_str += c

cout << temp_str << endl



*/






