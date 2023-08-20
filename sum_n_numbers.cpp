#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"eneter thr number you want to ADD up to"<<endl;
    cin>>n;
    int i,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of 10 natural number is: %d",sum);
    return 0;
}