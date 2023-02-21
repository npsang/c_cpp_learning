#include <iostream>
using namespace std;

bool KTSoCP(int n){
    int i = 0;
    while (i * i <= n)
    {
        if (i * i == n){
            return true;
        }
        ++i;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    bool kq = KTSoCP(n);
    cout<<n<<"la so chinh phuong: "<<kq;
    return 0;
}
