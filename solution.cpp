#include <iostream>
#include <string>
using namespace std;



int strStr(string haystack, string needle) {
	int n = haystack.length();
	int m = needle.length();
	int found_index = 0;
	int count = 0;
	int index1 = 0;
	int index2 = 0;
	while(index1 < n){
		
		//first case
		if(needle[index2] == haystack[index1]){
			count++;
			index2++;
		}else if(needle[index2] != haystack[index1]){
			count = 0;
			index2 = 0;
		}else if(count == m){
			found_index = index1 - m;
			break;
		}
		index1++;
	}

	return found_index;	

}

int main(int argc, char const *argv[])
{
    string haystack = "leetcode";
    string needle = "leeto";

    int result = strStr(haystack, needle);

    cout << result << endl;

    return 0;
}

/* - two string needle, haystack
 * - return the index of the first occurrence of needle in haystack
 * - return -1 if there is no needle
 * 
 *
 * pseudocode:
 *
 * string haystack
 * string needle
 * 
 * int n = haystack.length()
 * int m = needle.length()
 * 
 * bool found = false
 *
 * int found_index = 0	
 *
 * int count = 0
 * int index1 = 0
 * int index2 = 0
 * while(index1 < n){
 *	
 *	if needle[index2] == haystack[index1]:
 *		count++
 *		index2++
 *		
 *	else if needle[index2] != haystack[index1]:
 *		count = 0
 *		index2 = 0
 *	
 *	else if count == m:
 *		found_index = index1 - m
 *		break
 *	
 *	index1++
 *
 * return found_index
 *
 *
 */	
