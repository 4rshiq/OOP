//9. Count Vowels and Consonants in a String
#include<cctype>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    cout<<"enter your string: ";
    int vowels=0, consonents=0;
    getline(cin,input);
    for (int i = 0, length = input.length(); i < length; i++)
{
    char ch = tolower(input[i]);

    if (ch == ' ')
        continue;

    if (!isalpha(ch))
    {
        cout << "Only pass alphabets and spaces in your string!";
        break;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
    {
        vowels++;
    }
    else
    {
        consonents++;
    }
}
    cout<<"The number of vowels in your entered string are "<<vowels<<endl;
    cout<<"The number of consonents in your entered string are "<<consonents<<endl;
return 0;
}