 #include<iostream>
 using namespace std;
 

int main()
{
     int n;
    cin >> n;
    int i=1,count=0;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            // char ch='A'+i-1;
            char ch='A'+count;
            cout<<ch<<" ";
            j=j+1;
            count++;
        }
        cout<<endl;
        i=i+1;
    }
return 0;
}