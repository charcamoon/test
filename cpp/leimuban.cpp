#include <iostream>
#include <string>
using namespace std;

template<class nametype, class agetype>

class Person
{
public:
    Person(nametype name, agetype age)
    {
        m_name = name;
        m_age = age;
        cout << "name is : " << m_name << endl;
        cout << "age is : " << m_age << endl;
    }

private:
    nametype m_name;
    agetype m_age;
};

int main()
{
    Person<string,int> p1("suwukong", 999);
}
