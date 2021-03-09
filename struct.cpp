#include<iostream>
using namespace std;

struct employee{
	int age;
	char name;
	float salary;
}e;
int main(){
	e.age = 13;
	e.name = 'abc';
	e.salary = 12.5;
	cout<<"The salary of "<<e.name<<" is "<<e.salary<<" and the age is "<<e.age<<endl;
}
