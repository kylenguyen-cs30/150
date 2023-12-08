#include <iostream>
#include <string>
using namespace std;



int strStr(string haystack, string needle) {
	int n = haystack.length();
	int m = needle.length();
	
	// SPECIAL CASES 
	if(m == 0) return 0; // needle is empty
	if(n < m) return -1; // haystack is shorter than needle

	for (int i = 0; i <= n - m; i++)
	{
		int j;
		for(j = 0; j < m; j++){
			if (haystack[i+j] != needle[j]) 
				break;
		}

		//check if the whole needle was found
		if (j == m)
		{
			return i;
		}
	}

	return -1;
}

int main(int argc, char const *argv[])
{
    string haystack = "mississippi";
    string needle = "issip";

    int result = strStr(haystack, needle);

    cout << result << endl;

    return 0;
}


/*
- INSTITUTION: 

- The way for this work is breaking loop when the loop found there is a 
mis-match happens. the outer loop will loops all character in the first string
'haystack' and inner loop will loop all character in the second string 'needle'

- the first loop will loop at a range from 0 to n - m where n is length of haystack 
and m is length of needle. so the program does not have to spend any more memory to 
loop all characters in 'haystack' if the program found no more characters left to compare

- variable j is a counter and this inner loop will check by adding offset i+j so we do not
miss all the characters in the first haystack string.

*/	
