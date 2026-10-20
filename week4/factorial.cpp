/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : A3
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long fact=1;
    cout<<"input: ";
    cin>>n;
    if (n<0 || n >20)
    {
        cout<<"0 ≤ n ≤ 20";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    cout<<"output: "<<fact<<endl;
    
    /*
An int typically has a maximum value of 2,147,483,647 on
systems where it is a 32-bit signed integer. Factorials grow
very quickly: 12! = 479,001,600 fits in a 32-bit int, but
13! = 6,227,020,800 exceeds its maximum value.

A long long typically supports values up to
9,223,372,036,854,775,807 (2^63 - 1), which is large enough
to store 20! = 2,432,902,008,176,640,000.

Therefore, long long is required to correctly calculate
factorials for the full range 0 <= n <= 20.
*/

}