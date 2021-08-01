#include<iostream>
#include "point.cpp"
using namespace std;
int main()
{
	point A1(1.7,1.3);
	point A2(2,6);
	cout<<A1.distance(A2)<<endl;
	cout<<A1.distance(5,9);
	return 0;
}
