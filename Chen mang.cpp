#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"] la : ";
		cin>>a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

void chen(int a[], int &n, int vt, int scch)
{
	for(int i=n;i>=n;i--)
	{
		a[i]=a[i-1];
	}
	a[vt]=scch;
	n++;
}

int main()
{ int a[100],n,vt,scch;
cout<<"Nhap n :";
cin>>n;
nhap(a,n);
xuat(a,n);
cout<<"\nNhap vi tri can chen  \n";
cin>>vt;
if(vt>n)
{cout<<"error";}
else {cout<<"\nNhap so can chen : \n";
cin>>scch;
chen(a,n,vt,scch);
cout<<"the new table is : ";
xuat(a,n);
}
}
