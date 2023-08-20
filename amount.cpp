#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter The Total Amount : ";
    cin >> amount;

    int a, b, c, d;

    switch (true)
    {
case 1:
        a = amount / 100;
        amount = amount % 100;
        cout << "100Rs note are : " << a<<endl;
        
case 2:
        b = amount / 50;
        amount = amount % 50;
        cout << "50Rs note are : " << b<<endl;

case 3:
        c = amount / 20;
        amount = amount % 20;
        cout << "20Rs note are : " << c<<endl;

case 4:
        d = amount / 1;
        amount = amount % 1;
        cout << "1Rs note are : " << d<<endl;
    }

    return 0;
}