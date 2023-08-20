#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the First Number : " << endl;
    cin >> a;

    cout << "Enter the Second Number : " << endl;
    cin >> b;

    char op;
    cout << "Enter the Operation You Want To be Perform : ";
    cin >> op;

    switch (op)
    {
    case '+':
    {
        cout << "ADDITION : " << a + b;
    }
        break;
    
    case '-':
    {
        cout<<"SUBTRACTION : "<<a-b;
        break;
    }
    case '*':
    {
        cout<<"MULTIPLICAION : "<<a*b;
        break;
    }
    case '/':
    {
        cout<<"DIVISION : "<<a/b;
        break;
    }
    case '%':
    {
        cout<<"MODULUS : "<<a%b;
        break;
    }
    default: 
    {
        cout<<"Enter A Valid Operation";
    }
    }
    return 0;
}