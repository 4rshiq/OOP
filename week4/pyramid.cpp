/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : D3
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
        for (int j = height-i; j>0 ; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k<=i; k++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}