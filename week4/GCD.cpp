/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : B5
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Input :";
    cin>>a>>b;
    int original_a = a,original_b = b;
    while (r!=0)
    {
        r = a%b;
        a=b;
        b=r;

    }
    int lcm = original_a*original_b/a;

    cout<<"Output: GCD = "<<a<<", LCM ="<<lcm<<endl; 
}