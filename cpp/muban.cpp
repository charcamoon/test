#include <iostream>
using namespace std;

template<typename T>

void myswap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    //第一种实现方式,自动推导类型
    int a = 10;
    int b = 20;
    myswap(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //第二种实现方式,显示指定T的类型
    double c = 3.3;
    double d = 5.5;
    myswap<double>(c,d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;


}
