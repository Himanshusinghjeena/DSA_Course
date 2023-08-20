 #include<iostream>
 using namespace std;
 
int main()
{int n;
    cout<<"enter the no. upto which you want series: "<<endl;
    cin>>n;
int a=0,b=1;
    for(int i=0;i<=n;i++)
    {
           int res=a+b;
          cout<<res<<" ";

          a=b;
          b=res;
    }
return 0;
}