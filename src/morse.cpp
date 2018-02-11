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
		for (int i=0; i!=latin.size(); ++i)
			if (latin[i] == a)
			{
				in_morse.push_back(morse[i]);
				break;
				continue;
			}

		for (int i=0; i!=latin_capital.size(); ++i)
			if (latin_capital[i] == a)
			{
				in_morse.push_back(morse[i]);
				break;
			}
	}
	return in_morse;
}
