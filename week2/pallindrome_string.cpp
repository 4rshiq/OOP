//3. Palindrome String
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    char temp;
    cout<<"enter your string: ";
    getline(cin,input);
    string original = input;
    for (int i = 0, length = input.length(); i < length/2; i++)
    {
        temp = input[i];
        input[i] = input[length-1-i];
        input[length-1-i] = temp;
    }
    if (input == original)
    {
        cout<<"the entered string is a pallindrome";
    }
    else
    {
        cout<<"not a pallindrome";
    }
    
    return 0;
}