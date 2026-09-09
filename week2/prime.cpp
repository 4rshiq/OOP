//8. Prime Number Check
#include<iostream>
using namespace std;
int main()
{
    int a,count=0;
    cout<<"enter a number: ";
    cin>>a;
    for (int i = 2; i < a; i++)
    {
       if (a%i == 0)
       {
        count++;
       }
       
        
    }
    count==2?cout<<a<<" is a prime number\n":cout<<a<<" is not a prime number";

}