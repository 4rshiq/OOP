/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : F1
*/
#include <iostream>
using namespace std;

int main()
{
    int marks[8] = {78, 85, 92, 67, 88, 73, 95, 81};

    int total = 0;
    int maximum = marks[0];
    int minimum = marks[0];

    for (int mark : marks)
    {
        total += mark;

        if (mark > maximum)
            maximum = mark;

        if (mark < minimum)
            minimum = mark;
    }

    cout << " Total = " << total<< " Maximum = " << maximum<< " Minimum = " << minimum << endl;
}