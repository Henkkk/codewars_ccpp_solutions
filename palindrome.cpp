#leetcode (9. Palindrome Number Easy) 
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include <typeinfo>

class Solution {
public:
	bool isPalindrome(int x) {
		int reversed;
		string str;

		str = to_string(x);
		reverse(str.begin(), str.end());

		if (to_string(x) == str) {
			return true;
		}
		else {
			return false;
		}
	}
};
