/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : C1
*/
#include<iostream>
using namespace std;
int main ()
{   
    int a;
    
    do
    {
        cout<<"Enter marks (0-100): ";
        cin>>a;
        a<0 || a>100 ?  cout<<"Invalid!"<<endl :cout<<"Accepted: "<<a<<endl;
    } while (a<0 || a>100);

}