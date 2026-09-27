#include <iostream>
using namespace std;

bool isPalindrome(int x) {
	if (x < 0) return false; // * negative number cannot be is a palindrome
	if (x < 10) return true; // * single digit is always a palindrome
	if (x % 10 == 0) return false; // * number with a zero as last digit cannot be is a palindrome

	// --- DEEP ANALYZE
	// ----------------
	int reversed_num = 0;
	while (x > reversed_num) {
		//cout << "X: " << x << endl;
		//cout << "Reversed: " << reversed_num << endl << endl;

		reversed_num = reversed_num * 10 + (x % 10);
		x /= 10;
	}

	//cout << "X: " << x << endl;
	//cout << "Reversed: " << reversed_num << endl << endl;

	//if ((reversed_num - x) == 0 || (reversed_num - x * 10) == 0) return true;
	//if ((reversed_num > x) && (reversed_num - (x * 10)) > 0 && (reversed_num - (x * 10)) < 10) return true;

	if (x == reversed_num || x == reversed_num / 10) return true;
	return false;
}

int main()
{
	// * type your number here to check
	int number = 1239321;

	bool result = isPalindrome(number);
	cout << "Number " << number << " is palindrome? " << result << endl;

	return 0;
}


