 #include<iostream>
 using namespace std;
 

int main()
{int n;
cout<<"enter thr no. you want to check out prime or not: "<<endl;;
cin>>n;

int isprime=1;
for(int i=2;i<n;i++)
{
    if ( n%i==0)
   {
    isprime=0;
    break;
   }
}
if(isprime==0)
{
    cout<<" Not A Prime Number";
}
else{
    cout<<"Prime Number";
}
return 0;
}