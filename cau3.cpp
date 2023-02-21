#include <iostream>
using namespace std;
const int M = 100;
const int N = 100;

void nhap_ma_tran(int hang, int cot, int ma_tran[M][N])
{
    if (hang > 0 && cot > 0)
    {
        for (int i = 0; i < hang; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                cout<<"ma_tran["<<i<<"]["<<j<<"] = ";
                cin>>ma_tran[i][j];
            }
        }
        cout<<"Nhap ma tran thanh cong !!!\n---*---"<<endl;
    }
    else
    {
        cout<<"hang va cot khong hop le"<<endl;
    }
}

void xuat_ma_tran(int hang, int cot, int ma_tran[M][N])
{   
    if (hang > 0 && cot > 0)
    {
        for (int i = 0; i < hang; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                cout<<ma_tran[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<"Xuat ma tran thanh cong\n---*---\n";
    }
    else
    {
        cout<<"Xuat ma tran khong thanh cong\n";
    }
}

bool kiem_tra_so_le(int so)
{
    if (so%2 != 0)
    {
        return true;
    }
    return false;
}

int tinh_tong_le(int hang, int cot, int ma_tran[M][N])
{   
    int tong = 0;
    if (hang > 0 && cot > 0)
    {
        for (int i = 0; i < hang; i++)
        {
            for (int j = 0; j < cot; j++)
            {
                int phan_tu_dang_xet = ma_tran[i][j];
                if (kiem_tra_so_le(phan_tu_dang_xet) == true)
                {   
                    cout<<phan_tu_dang_xet<<" so le"<<endl;
                    tong = tong + phan_tu_dang_xet;
                }
                else
                {
                    cout<<phan_tu_dang_xet<<" so chan"<<endl;
                }
                cout <<"Tong hien tai = "<< tong <<endl;
            }
            cout<<endl;
        }
        cout<<"Tinh tong le ma tran thanh cong\n---*---\n";
    }
    else
    {
        cout<<"Tinh tong le ma tran khong thanh cong\n";
    }
    return tong;
}


main()
{
    int ma_tran[M][N];
    int m;
    int n;
    cout<<"Nhap m(hang) va n(cot) cho ma tran."<<endl;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    nhap_ma_tran(m, n, ma_tran);

    cout<<"Xuat ma tran"<<endl;
    xuat_ma_tran(m, n, ma_tran);

    cout<<"Tinh tong cac pha tu la so le co trong ma tran"<<endl;
    int tong = tinh_tong_le(m,n, ma_tran);
    cout<<"Tong so le: "<<tong<<endl;

    return 0;
}