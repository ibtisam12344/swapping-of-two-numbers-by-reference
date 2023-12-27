#include<iostream>
using namespace std;
void swapping(int& a, int& b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
int main()
{
	int a;
	int b;
	cout << "Enter the value of a = ";
	cin >> a;
	cout << "Enter the value of b = ";
	cin >> b;
	swap(a, b);
	cout << "Value of a after exchange is = " << a << endl;
	cout << "Value of b after exchange is = " << b << endl;
	return 0;
}