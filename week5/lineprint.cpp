//lab 1 Q1
#include<iostream>
#include<string>
using namespace std;

void printLine(char ch, int n);
int main()
{
    string name;
    cout<<"enter your name: ";
    cin>>name;
    int n = name.length();
    printLine('-',n);
    cout<<name<<endl;
    printLine('-',n);
    return 0;
}
void printLine(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ch;
    }
    cout<<endl;

}