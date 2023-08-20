#include <iostream>
using namespace std;
int ap (int n)
{
    
   for(int i=1;i<=n;i++)
   {
    int num=0;
    num=(3*i+7);
    cout<<num<<" ";
   }
} 
int main()
{
    int n;
    cout << "Enter the number upto which you want Arithmetic Series: ";
    cin >> n;
    ap(n);
    return 0;
}