#include <iostream>
#include <cstring>
using namespace std;
void encode(string s, int j)
{
    for (int i = j; i < s.length(); i++)
    {
        s[i] = s[i] + 2;
        i=i+j;
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] ;
    }


}


int main()
{
    string str;
    int skip;
    cout << "Enter a string:" << endl;
    getline(cin, str);
    cout << "Enter number of characters to be skipped:" << endl;
    cin >> skip;
    encode(str, skip);

    return 0;
}
