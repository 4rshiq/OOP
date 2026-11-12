
#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string model;
        int price;

    public:
        void input()
        {
            cout << "Enter model and price: ";
            cin >> model >> price;
        }

        void display()
        {
            cout << model << ": " << price << endl;
        }
};

int main()
{
    Car cars[3];


    for(int i = 0; i < 3; i++)
    {
        cars[i].input();
    }

    for(int i = 0; i < 3; i++)
    {
        cars[i].display();
    }

    return 0;
}
