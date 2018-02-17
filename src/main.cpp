#include "../include/morse.h"

using namespace std;

int main()
{
    cout << "Enter word to convert to morse code: ";
    string word {};
    cin >> word;
    vector<string> in_morse {to_morse(word)};
    for (auto& a : in_morse)
        cout << a << ' ';
    cout << endl;
    return 0;
}
