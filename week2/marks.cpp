//10. Simple Marks System
#include <iostream>
using namespace std;
int main()
{
    int marks[5], total = 0;
    int average;
    float percentage;
    cout << "input the marks obtained (out of 100 ) in the five subjects\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }
    average = total / 5;
    percentage = (total / 500.00) * 100 ;
    cout << "the total of the marks obtained is " << total<<endl;
    cout << "the average of the marks obtained is " << average<<endl;
    cout << "the percentage obtained is " << percentage<<endl;

    if (percentage >= 90)
    {
        cout << "Grade : O "<<"\n";
    }
    else if(percentage >=80 && percentage<90)
    {
        cout << "Grade : A"<<"\n";
    }
    else if(percentage >= 70 && percentage< 80)
    {
        cout << "Grade : B"<<"\n";
    }
    else if(percentage >=60 && percentage<70)
    {
        cout << "Grade : C"<<"\n";
    }
    else if(percentage >=50 && percentage<60)
    {
        cout << "Grade : D"<<"\n";
    }
    else if(percentage >= 40 && percentage < 50)
    {
        cout << "Grade : E"<<"\n";
    }
    else 
    {
        cout << "Grade : F"<<"\n";
    }
}