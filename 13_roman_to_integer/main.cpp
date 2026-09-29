#include <iostream>
#include <map>

using namespace std;

const map<char, int> ROMAN_MAP = {
	{'I', 1},
	{'V', 5},
	{'X', 10},
	{'L', 50},
	{'C', 100},
	{'D', 500},
	{'M', 1000}
};

int romanToInt(string s) {
    int result = 0;
	for (string::reverse_iterator it = s.rbegin(); it != s.rend(); ++it) {
		if (it != s.rbegin() && ROMAN_MAP.at(*it) < ROMAN_MAP.at(*(it - 1))) {
			//cout << "Previous character: " << *(it - 1) << ", value: " << ROMAN_MAP.at(*(it - 1)) << endl;
			//cout << "Current character: " << *it << ", value: " << ROMAN_MAP.at(*it) << endl << endl;

			result -= ROMAN_MAP.at(*it);
			continue;
		}

		//cout << "Current character: " << *it << ", value: " << ROMAN_MAP.at(*it) << endl << endl;
        result += ROMAN_MAP.at(*it);
	}

	return result;
}

int main()
{
	// * type your values here to check
	const string roman_number = "MCDLIV";
	const int result = romanToInt(roman_number);

	cout << "Roman number " << roman_number << " is a arabic number: " << result << endl;
	return 0;
}


