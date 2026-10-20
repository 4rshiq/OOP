/*name : Arshiq 
enrolment number : IUST0125019889
date : 7th of October 2026
question number : C2
*/
#include<iostream>
using namespace std;
int main ()
{ 
    int choice,a,b;
    do
    {
        cout<<"1. Add 2. Subtract 3. Multiply 4. Divide 5. Exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            {cout<<"Enter two numbers: ";
            cin>>a>>b;
            cout<<"Result= "<<a+b<<endl;
            break;}
        case 2:
             {cout<<"Enter two number: ";
            cin>>a>>b;
            cout<<"Result= "<<a-b<<endl;
            break;}
            
        
        case 3:
             {cout<<"Enter two number: ";
            cin>>a>>b;
            cout<<"Result= "<<a*b<<endl;
            break;}
            
        
        case 4:
             {cout<<"Enter two number: ";
            cin>>a>>b;
            b==0 ? cout<<"division by zero not possible"<<endl :cout<<"Result= "<<a/b<<endl;
            break;}
            
        
        case 5:
        cout<<"Goodbye!\n";
            break;
        
        default:
            cout<<"Invalid choice";
            break;
        }
        
    } while (choice != 5);
   return 0; 
}