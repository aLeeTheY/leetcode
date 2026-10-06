#include <iostream>
#include <stack>

using namespace std;

// * 1 <= s.length <= 104
// * s consists of parentheses only '()[]{}'
// ! внедрение счётчиков type1, type2, type3 - это лишнее
bool isValid(string s) {
	// * только строки с чётным числом символов удовлетворят условию задачи
	if (s.size() % 2 != 0) return false;

	stack<char> brackets;
	char topBracket;

	for (string::iterator el = s.begin(); el != s.end(); ++el) {
		if (*el == '(' || *el == '[' || *el == '{') {
			// * открывающие
			// * открывающие скобки пихаем в стек
			brackets.push(*el);
		}
		else {
			// * закрывающие
			if (brackets.empty()) 
				return false;

			topBracket = brackets.top();
			// * если закрывающая скобка не того типа после открывающей - нарушение
			if (topBracket == '(' && *el != ')' || topBracket == '[' && *el != ']' || topBracket == '{' && *el != '}')
				return false;

			brackets.pop();
		}
	}

	// * если в самом конце стек пустой - всё чётко, все скобки схлопнулись
	return brackets.empty();
}

int main()
{
	// * type your values here to check
	string brackets = "()";
	bool result = isValid(brackets);

	cout << "Are your brackets is valid? " << result << endl;
	return 0;
}


