#include<iostream>
using namespace std;

int product(int x, int y)
 {
 	int z;
 	z = x*y;
 	return z;
 }
 
int main()
{
	int a,b;
	cout<<"The value of a : "<<endl;
	cin>>a;
	cout<<"The value of b : "<<endl;
	cin>>b;
	cout<<"The product is : "<<product(a,b)<<endl;
	return 0;
}
 
