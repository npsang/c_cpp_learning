#include <iostream>
#include <math.h>
using namespace std;

void nhap_mang(int mang[], int kich_thuoc)
{
    if (kich_thuoc > 0)
    {
        for (int i = 0; i < kich_thuoc; i++)
        {
            cout<<"mang["<<i<<"] = ";
            cin>>mang[i];
        }
        cout<<"Nhap mang thanh cong\n---*---"<<endl;
    }
    else
    {
        cout<<"\nLoi Nhap mang\n---*---"<<endl;
    }
}

void xuat_mang(int mang[], int kich_thuoc)
{
    if (kich_thuoc > 0)
    {
        for (int i = 0; i < kich_thuoc; i++)
        {
            cout<<mang[i]<<"   ";
        }
        cout<<"\nXuat mang thanh cong\n---*---"<<endl;
    }
    else
    {
        cout<<"\nLoi xuat mang\n---*---"<<endl;
    }
}

bool tim_phan_tu_x(int mang[], int kich_thuoc, int phan_tu_x)
{
    if (kich_thuoc > 0)
    {
        for (int i = 0; i < kich_thuoc; i++)
        {
            if (mang[i] == phan_tu_x)
            {
                cout<<"\nTim phan tu trong mang thanh cong\n---*---"<<endl;
                return true;
            }
        }
    }
    else
    {
        cout<<"\nLoi khi tim phan tu trong mang\n---*---"<<endl;
    }
    return false;
}

bool kiem_tra_so_nguyen_to(int so){
    if (so > 1)
    {
        int  can_bac_2 = sqrt(so);
        int dem_uoc = 0;
        for (int i = 2; i <= can_bac_2; i++)
        {   
            if (so%i == 0)
            {
                dem_uoc++;
            }
        }
        if (dem_uoc == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

bool kiem_tra_mang_toan_nguyen_to(int mang[], int kich_thuoc){
    if (kich_thuoc > 0)
    {
        int dem_so_nguyen_to_trong_mang = 0;
        for (int i = 0; i < kich_thuoc; i++)
        {
            if (kiem_tra_so_nguyen_to(mang[0]) == true)
            {
                dem_so_nguyen_to_trong_mang++;
            }
        }
        if (dem_so_nguyen_to_trong_mang == kich_thuoc)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

main()
{
    int n;
    cout<<"Nhap so luong phan tu cua mang: n = ";
    cin>> n;
    int mang[n];

    nhap_mang(mang, n);
    xuat_mang(mang, n);

    int x;
    cout<<"Nhap x de tim x ben trong mang. X phai la so nguyen duong.\n x = ";
    cin>> x;
    cout<<"Dang tim phan tu: ...";
    bool ket_qua_tim_kiem = tim_phan_tu_x(mang, n, x);
    cout<<"Phan tu x = "<<x<<" co o trong mang: "<<ket_qua_tim_kiem<<"\n0: false, 1: true (ham tra ve true false nhung khi in ra la 0 va 1)\n---*---"<<endl;

    cout<<"Dang kiem tra mang toan nguyen to: ...";
    bool ket_qua_kiem_tra_mang_toan_nguyen_to = kiem_tra_mang_toan_nguyen_to(mang, n);
    cout<<"Mang toan nguyen to: "<<ket_qua_kiem_tra_mang_toan_nguyen_to<<"\n0: false, 1: true (ham tra ve true false nhung khi in ra la 0 va 1)\n---*---"<<endl;

    return 0;
}