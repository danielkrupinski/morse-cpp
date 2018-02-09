#include "../include/morse.h"

using namespace std;

string to_morse(const string& s)
{
	static const string latin {"abcdefghijklmnopqrstuvwxyz"};
	static const string latin_capital {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	static const string latin_digits {"0123456789"};
	static const vector<string> morse {"• −", "− • • •", "− • − •", "− • •", "•", "• • − •", "− − •", "• • • •", "• •", "• − − −", "− • −", "• − • •", "− −", "− •", "− − −", "• − − •", "− − • −", "• − •", "• • •", "−", "• • −", "• • • −", "• − −", "− • • −", "− • − −", "− − • •"};
	static const vector<string> morse_digits {"− − − − −", "• − − − −", "• • − − −", "• • • − −", "• • • • −", "• • • • •", "− • • • •", "− − • • •", "− − − • •", "− − − − •"};
}
