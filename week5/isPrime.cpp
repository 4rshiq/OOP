//lab 1 Q2
#include<iostream>
#include<string>
using namespace std;

bool isPrime(int n);
int main()
{
    int n1,n2;
    cout<<"enter first and last number: ";
    cin>>n1>>n2;
    
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
            
    }
    

}

bool isPrime(int n){
    
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
    
}