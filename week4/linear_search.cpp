/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : E3
*/
#include<iostream>
using namespace std;
int main()
{
    int key,index, arr[] = {1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,41,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    cout<<"Enter the number you want to find: ";
    cin>>key;

    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            index = i;
            break;
        }
        
    }
    cout<<key<<" found at index "<<index<<endl;
}