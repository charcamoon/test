#include <iostream>
#include <string>
using namespace std;

class person {
public:
    void getname(string name)
    {
       m_name = name;
       cout << "name is : " << m_name << endl;
    }

    void getnumber(int number)
    {
        m_number = number;
        cout << "number is : " << m_number << endl;
    }

private:
    string m_name;
    int m_number;
};

int main()
{
    person person1;
    person1.getname("wanke");
    person1.getnumber(17017);
}
