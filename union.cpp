#include<iostream>
using namespace std;
union money{
	int rice;
	char car;
	float pound;
};
int main()
{
	union money m1;
	m1.rice = 34;
	cout<<m1.rice<<endl;
	m1.car = 'a';
	cout<<m1.car<<endl;
	m1.pound = 23.34;
	cout<<m1.pound<<endl;
	cout<<m1.car<<endl;
	cout<<m1.rice<<endl;
}
