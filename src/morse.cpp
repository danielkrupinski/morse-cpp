#include "../include/morse.h"

using namespace std;

vector<string> to_morse(const string& s)
{
	static const string latin {"abcdefghijklmnopqrstuvwxyz"};
	static const string latin_capital {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	static const vector<string> morse {"• −", "− • • •", "− • − •", "− • •", "•", "• • − •", "− − •", "• • • •", "• •", "• − − −", "− • −", "• − • •", "− −", "− •", "− − −", "• − − •", "− − • −", "• − •", "• • •", "−", "• • −", "• • • −", "• − −", "− • • −", "− • − −", "− − • •"};
	
	vector<string> in_morse {};
	for (const auto& a : s)
	{
		for (const auto& b : latin)
			if (b == a)
			{
				in_morse.push_back(morse[b]);
				break;
			}

		for (const auto& c : latin_capital)
			if (c == a)
			{
				in_morse.push_back(morse[c]);
				break;
			}
	}
	return in_morse;
}
