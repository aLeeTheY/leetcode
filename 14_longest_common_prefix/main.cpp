#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	// * для массива с одним элементом - возвращаем этот элемент сразу
	if (strs.size() == 1) return strs[0];

	for (size_t letter = 0; letter < strs[0].size(); letter++) {
		// внутренний цикл начинаем со второго слова
		for (size_t word = 1; word < strs.size(); word++) {
			// * сравнивам буквы первого слова со всеми остальными словами
			// * если позиция текущей буквы это конец какого-то слова или при несовпадении букв, возращаем префикс
			if (letter == strs[word].length() || strs[0][letter] != strs[word][letter]) {
				return strs[0].substr(0, letter);
			}
		}
	}
	
	return strs[0];
}

int main()
{
	// * type your values here to check
	vector<string> strs = { "flower", "flow", "flight" };
	const string result = longestCommonPrefix(strs);

	cout << "Longest common prefix for your strs[] is: " << result << endl;
	return 0;
}


