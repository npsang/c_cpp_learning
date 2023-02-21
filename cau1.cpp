#include <iostream>
using namespace std;


int main()
{
    int n;
    double s = 0;
    int i = 1;
    
    cout<<"Nhap n: ";
    cin>>n;

    for (i; i <= n; i++)
    {
        s = s + 1/double(i);
    }

    cout<<"Tong S: "<<s;

    return 0;
}
