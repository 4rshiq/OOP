/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : F2
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 0;

    getline(cin, str);

    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'A' ||
            ch == 'E' || ch == 'I' || ch == 'O' ||
            ch == 'U')
        {
            count++;
        }
    }

    cout << "vowels = " << count << endl;
}