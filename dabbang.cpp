 #include<iostream>
 using namespace std;
 
int main()
{
     int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j++;
        }
        int start=2*i-2;
       while(start)
       {
        cout<<"*";
        start--;
       }
       int k=1;
     while(k <= n-i+1)
     {
        cout<<k;
        k++;
     }
        cout << endl;
        i++;
    }
return 0;
}