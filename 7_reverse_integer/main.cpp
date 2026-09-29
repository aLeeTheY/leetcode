#include <iostream>
#include <limits>

using namespace std;

// * constraint: -2^31 <= x <= 2^31 - 1
int reverse(int x) {
	if (x == INT_MIN || x == INT_MAX) return 0;

	// сохраняем изначальный знак числа и уходим от отрицательности
	int num_sign = 1;
	if (x < 0) {
		num_sign = -1;
		x *= -1;
	}

	int result = 0;
	while (x != 0) {
		//cout << "Current x is: " << x << endl;
		//cout << "Current result is: " << result << endl << endl;

		if (result > INT_MAX / 10)
			return 0;

		result = 10 * result + (x % 10);
		x /= 10;
	}

	return num_sign * result;
}

int main()
{
	// * type your values here to check
	const int original = INT_MIN + 1;
	const int result = reverse(original);

	cout << "Original number: " << original << "; Reversed number: " << result << ";" << endl;
	return 0;
}


