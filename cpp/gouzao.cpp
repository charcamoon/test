#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "This is gouzao hanshu" << endl;
    }

    ~Person()
    {
        cout << "This is xigou hanshu" << endl;
    } 
};

int main()
{
    Person person1;
    return 0;
}


