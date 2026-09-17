// 2) student grading system
#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    float percentage[5],total=0;
    char Grade[5],overall;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the marks optained in subject " << i + 1 << " (out of 100) " << endl;
        cin >> marks[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        percentage[i] = (marks[i] / 100.00) * 100.00;
        total += percentage[i];
        
        if (percentage[i] >= 90)
        {
            Grade[i] = 'O';
        }
        else if (percentage[i] >= 80 && percentage[i] < 90)
        {
            Grade[i] = 'A';
        }
        else if (percentage[i] >= 70 && percentage[i] < 80)
        {
            Grade[i] = 'B';
        }
        else if (percentage[i] >= 60 && percentage[i] < 70)
        {
            Grade[i] = 'C';
        }
        else if (percentage[i] >= 50 && percentage[i] < 60)
        {
            Grade[i] = 'D';
        }
        else if (percentage[i] >= 40 && percentage[i] < 50)
        {
            Grade[i] = 'E';
        }
        else
        {
            Grade[i] = 'F';
        }
    }
    total /=5;
    if (total >= 90)
        {
            overall = 'O';
        }
        else if (total >= 80 && total < 90)
        {
            overall = 'A';
        }
        else if (total >= 70 && total < 80)
        {
            overall = 'B';
        }
        else if (total >= 60 && total < 70)
        {
            overall = 'C';
        }
        else if (total >= 50 && total < 60)
        {
            overall = 'D';
        }
        else if (total >= 40 && total < 50)
        {
            overall = 'E';
        }
    int count = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if(Grade[i] == 'F')
        {
            count++;
        }
    }
    
    if (count > 1)
    {
        cout<<"Repeat Year\n";
    }
    else
    {
        for (int i = 0; i < 5; i++)
    {
       cout<<"subject "<< i+1 <<" Grade: "<< Grade[i]<<"\n";
       
    }
    cout<<"over all GRADE :"<<overall;
    }
    return 0;
}