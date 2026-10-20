/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : B1
*/
#include<iostream>
using namespace std;
int main()
{
    int n,remainder=0,digits=0,sum=0;
    cout<<"input: ";
    cin>>n;
    while(n!=0){
        remainder = n%10;
       sum+= remainder;
       digits++;
        n/=10;
    }
    cout<<"output: "<<"digits = "<<digits<<", sum =  "<<sum<<endl;
}