/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : D1
*/
#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter the height of your pyramid: ";
    cin>>height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}