#include <iostream>
#include<iomanip>
using namespace std;
int ktraNto(int n)
{ int uoc=0;
	for (int a=1;a<=n;a++)
	{if(n%a==0)
	{uoc++;}}
	if(uoc==2)
	{return 1;}
	else{return 0;}
}
// ktra so nguyen to
void nhap(int a[], int n)
{for (int i=0;i<n;i++)
{cout<<"A["<<i<<"] la : ";cin>>a[i];}}
//nhap mang

void xuat( int a[], int n)
{for (int i=0;i<n;i++)
{cout<<a[i]<<"\t";}}
//xuat mang
void soNto(int a[],int n)
{ cout<<"\nso nguyen to tronng mang la :\n"<<endl; 
for (int x=0;x<=n;x++)	
{ if (ktraNto(a[x])==1)
{cout<<a[x]<<"\t"<<endl;}}}
//in so nguyen to

int main()
{
int a[100];
int n;
cout<<"nhap n= "<<endl;
cin>>n;
cout<<"\nNhap mang\n";
nhap(a,n);
cout<<"\nXuat mang\n";
xuat(a,n);
soNto(a,n);
}
