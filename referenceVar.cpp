#include<iostream>
using namespace std;
int main()
{
	int a = 234;
	float b = 373.47;
	cout<<"The value of b is:"<<b<<endl;
	cout<<"The value of a is:"<<a<<endl;
	cout<<"the value of b int is:"<<int(b)<<endl;
	int &c = a;
	int &d = c;
	cout<<"The value of c is: "<<c<<endl;
	cout<<"the value of d is: "<<d<<endl;
}
