// 4. Largest Element in an Array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many elements do you want to store in an array?\n";
    cin>>n;
    int arr[n];
    cout<<"enter the numeric elements you want to store in the array\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    cout<<"the largest element in you array is "<< largest;
    
    
}